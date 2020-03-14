#include<stdio.h>
int check(char* t)
{
	char* p = t;
	int f1 = 0, f2 = 0, f3 = 0, fp = 0, ft = 0;
	while(*p != '\0')
	{
		if((*p != 'P')&&(*p != 'A')&&(*p != 'T'))
		{
			return 0;
		}
		else if(*p == 'T' && fp == 0)
		{
			return 0;
		}
		else if(*p == 'P' && fp == 1){
			return 0;
		}
		else if(*p == 'T' && ft == 1){
			return 0;
		}
		else if(*p == 'P'){
			fp = 1;
		}
		else if(*p == 'T'){
			ft = 1;
		}
		else if(*p == 'A')
		{
			if(fp == 0)
			   f1++;
			else if(fp == 1 && ft == 0)
			   f2++;
			else if(fp == 1 && ft == 1)
			   f3++;
		}
		p++;
	}
	if(f2 != 0 && fp == 1 && ft == 1){
		if(f1*f2 == f3){
			return 1;
		}
		else 
			return 0;
	}
	else
		return 0;
}
int main()
{
	int n;
	scanf("%d", &n);
	char ch[101];
	while(n--)
	{	scanf("%s", ch);
		if(check(ch)){
			printf("YES\n");
		}
		else
			printf("NO\n");
	}
	return 0;
}
