#include<stdio.h>
#include<stdlib.h>
typedef struct student{
	int id;
	int de;
	int cai;
	int sum;
	int type;
}stu;
int compare(const void* a, const void* b)
{
	stu* m = (stu*)a;
	stu* n = (stu*)b;
	if(m->type != n->type){
		return m->type - n->type;
	}
	else{
		if(m->sum == n->sum){
			if(m->de == n->de)
				return m->id - n->id;
			else
			    return n->de - m->de;
		}
		else
			return n->sum - m->sum;
	}
}
int main(){
	int n, x, y, count = 0, i;
	scanf("%d %d %d", &n, &x, &y);
	stu *list;
	list = (stu*)malloc(n*sizeof(stu));
	for(i = 0; i < n; i++){
		scanf("%d %d %d", &list[i].id, &list[i].de, &list[i].cai);
		list[i].sum = list[i].de + list[i].cai;
		if(list[i].de >= x && list[i].cai >= x){
			count++;
			if(list[i].de >= y && list[i].cai >= y){
				list[i].type = 1;	
			}
			else if(list[i].de >= y && list[i].cai < y){
				list[i].type = 2;
			}
			else if(list[i].de >= list[i].cai && list[i].de < y){
				list[i].type = 3;
			}
			else{
				list[i].type = 4;
			}
		}
		else{
			list[i].type = 5;
		}
	}
	qsort(list, n, sizeof(stu), compare);
	printf("%d\n", count);
	for(i = 0; i < n; i++){
		if(list[i].type != 5){
			printf("%d %d %d\n", list[i].id, list[i].de, list[i].cai);
		}
	}
	return 0;
}
