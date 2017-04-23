#include<stdio.h>
int main()
{
	int n,s=0;
	scanf("%d",&n);
	if(n>0&&n<=1000)
	{
		while(n!=1)
		{
			if(n%2)
			{
				n=(3*n+1)/2;
				s++;
			}
			else
			{
				n=n/2;
				s++;
			}
		}
	}
	else
		printf("error");
	printf("%d",s);
	return 0;
}
