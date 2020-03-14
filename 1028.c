#include<stdio.h>
#include<stdlib.h>
typedef struct man{
	char name[6];
	int y;
	int m;
	int d;
}man;
int comp(const void *a, const void *b){
	man *q = (man*)a;
	man *p = (man*)b;
	if(q->y != p->y)
		return q->y - p->y;
	else if(q->m != p->m){
		return q->m - p->m;
	}
	else if(q->d != p->d){
		return q->d - p->d;
	}
}
int main(){
	int n, i, count = 0, j;
	char ch[6];
	int x, y, z;
	scanf("%d", &n);
	man t[n];
	for(i = 0; i < n; i++){
		scanf("%s %d/%d/%d",ch, &x, &y, &z);
		if(x < 2014 && x > 1814){
			for(j = 0; j < 6; j++){
				t[count].name[j] = ch[j];
			}
			t[count].y = x;
			t[count].m = y;
			t[count].d = z;
			count++;
		}
		else if(x == 1814){
			if(y > 9){
				for(j = 0; j < 6; j++){
					t[count].name[j] = ch[j];
				}
				t[count].y = x;
				t[count].m = y;
				t[count].d = z;
				count++;
			}
			else if(y == 9){
				if(z >= 6){
					for(j = 0; j < 6; j++){
						t[count].name[j] = ch[j];
					}
					t[count].y = x;
					t[count].m = y;
					t[count].d = z;
					count++;
				}
			}
		}
		else if(x == 2014){
			if(y < 9){
				for(j = 0; j < 6; j++){
					t[count].name[j] = ch[j];
				}
				t[count].y = x;
				t[count].m = y;
				t[count].d = z;
				count++;
			}
			else if(y == 9){
				if(z <= 6){
					for(j = 0; j < 6; j++){
						t[count].name[j] = ch[j];
					}
					t[count].y = x;
					t[count].m = y;
					t[count].d = z;
					count++;
				}
			}				
		}
	}
	if(count == 0)
		printf("0");
	else{
		qsort(t, count, sizeof(man), comp);
		printf("%d %s %s", count, t[0].name, t[count - 1].name);
	}
	return 0;	
}
