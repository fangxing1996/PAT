#include<stdio.h>
int main(){
	int n,m,i,j,k=0,temp;
	scanf("%d",&n);
	char ch[n][15],s[15]={'\0'},r[15]={'\0'};
	int a[n],b[n];
	for(i=0;i<n;i++)
	{
		scanf("%s %d %d",ch[i],&a[i],&b[i]);
	}
	scanf("%d",&m);
	while(k<m)
	{	scanf("%d",&temp);
		for(i=0;i<n;i++)
		{
			if(a[i]==temp)
				printf("%s %d\n",ch[i],b[i]);
		}
		k++;
	}
	return 0;
}
