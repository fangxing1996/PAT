#include<stdio.h>
int sum(int n)
{
	int s=0;
	if(n/10)
	{
		return (n%10+sum(n/10));
	}
	else
		return n;
}
//冒泡排序 
int bubble(int a[],int n)
{
	int i,j,t;
	for(i=0;i<n;i++)
	{
		for(j=1;j<n-i;j++)
		{
			if(a[j]<a[j-1])
			{
				t=a[j];
				a[j]=a[j-1];
				a[j-1]=t;
			}	
		}
	}
	return 0;
}
int main()
{
	int temp,i,t;
	scanf("%d",&temp);
	t=temp;
	int a[temp];
	for(i=0;i<temp;i++)
	{
		scanf("%d",&a[i]);
		a[i]=sum(a[i]);
	}
	bubble(a,temp);
	i=0;
	for(i=1;i<temp;i++)
	{
		if(a[i]==a[i-1])
		{
			a[i-1]=-1;
			t--;
		}
	}
	printf("%d\n",t);
	for(i=0;i<temp-1;i++)
	{
		if(a[i]!=-1)
			printf("%d ",a[i]);
	}
	printf("%d",a[i]);
	return 0;
}
