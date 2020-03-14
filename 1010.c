#include<stdio.h>
int main(){
	char ch = 'a';
	int a, b, i = 0;
	while(ch != '\n'){
		scanf("%d %d", &a, &b);
		if(i == 0)
		{
			if(b == 0)
				printf("0 0");
			else
				printf("%d %d", a*b, b - 1); 
		}
		else{
			if(b != 0)
				printf(" %d %d", a*b, b - 1);
		}
		i++;
		ch = getchar();
	}
	return 0;
}
