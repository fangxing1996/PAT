#include<stdio.h>
int main()
{
	int in[10],i,j,a;
	for(i=0;i<10;i++)
	{
		scanf("%d",&in[i]);
	}
	i=1;
	while(in[i++]==0);
	a=i-1;
	printf("%d",a);
	for(j=0;j<10;j++)
	{
		if(j!=a)
		{
			for(i=0;i<in[j];i++)
				printf("%d",j);
		}
		else
		{
			for(i=0;i<in[a]-1;i++)
				printf("%d",a);
		}
	}
	return 0;
}
