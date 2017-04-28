#include<stdio.h>
int f(int a[],int n)
{
	int t,i;
	t=*(a+n-1);
	for(i=n-1;i>=1;i--)
	{
		*(a+i)=*(a+i-1);
	}
	*a=t;
	return 0;
}
int main()
{
	int N,M,i,temp;
	scanf("%d %d",&N,&M);
	int in[N];
	for(i=0;i<N;i++)
	{
		scanf("%d",&in[i]);
	}
	M=M%N;
	for(i=0;i<M;i++)
	{
		f(in,N);
	}
	for(i=0;i<N-1;i++)
	{
		printf("%d ",in[i]);
	}
	printf("%d",in[N-1]);
	return 0;	
}
