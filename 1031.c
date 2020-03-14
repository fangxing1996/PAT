#include<stdio.h>
int check(char *ch){
	int w[17] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
	char q[11] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};
	int s = 0, i = 0;
	while(i < 17){
		if(ch[i] >= '0' && ch[i] <= '9'){ 
			s = s + (ch[i] - '0')*w[i];
		} 
		else
			return 0; 
		i++;
	}
	s = s%11;
	if(ch[17] == q[s])
		return 1;
	else
		return 0;
}
int main(){
	int N, i;
	scanf("%d", &N);
	char id[N][19];
	int t[N], count = 0;
	for(i = 0; i < N; i++){
		scanf("%s", id[i]);
		if(check(id[i]))
			;
		else{
			t[count++] = i;
		}	
	}
	if(count == 0){
		printf("All passed");
	}
	else{
		for(i = 0; i < count; i++){
			printf("%s\n", id[t[i]]);
		}
	}
	return 0;
} 
