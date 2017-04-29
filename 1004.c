#include<stdio.h>
#include<stdlib.h>
typedef struct string{
	char stm[11]; 
	char stn[11];
	int mark;
}string;
int bubble(int a[],int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=1;j<n-i;j++)
		{
			if(a[j]>a[j-1])
			{
				temp=a[j];
				a[j]=a[j-1];
				a[j-1]=temp;
			}	
		}
	}
	return 0;
}
int main()
{
	int temp,i,*t;
	scanf("%d",&temp);
	t=(int *)malloc(temp*sizeof(int));
	string s[temp];
	for(i=0;i<temp;i++)
	{
		scanf("%s %s %d",s[i].stm,s[i].stn,&s[i].mark);
		t[i]=s[i].mark;
	}
	bubble(t,temp);
	for(i=0;i<temp;i++)
	{
		if(s[i].mark==t[0])
			printf("%s %s\n",s[i].stm,s[i].stn);
	}
	for(i=0;i<temp;i++)
	{
		if(s[i].mark==t[temp-1])
			printf("%s %s",s[i].stm,s[i].stn);
	}
	return 0;
}
