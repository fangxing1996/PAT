#include<stdio.h>
int main()
{
	int x,i,p;
	scanf("%d",&x);
	long long int in[x][3],t;
	for(i=0;i<x;i++)
	{
		scanf("%lld %lld %lld",&in[i][0],&in[i][1],&in[i][2]);
	}
	for(i=0;i<x;i++)
	{
		p=i+1;
		t=in[i][0]+in[i][1];
		if(t>in[i][2])
			printf("Case #%d: true\n",p);
		else
			printf("Case #%d: false\n",p);
	}
	return 0;
}
