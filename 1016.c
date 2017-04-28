#include<stdio.h>
#include<string.h>
int main()
{
	char a[9],b[9];
	int x,y,la,lb,i,p=0,q=0;
	long long int r=0,s=0; 
	scanf("%s %d %s %d",a,&x,b,&y);
	la=strlen(a);
	lb=strlen(b);
	for(i=0;i<la;i++)
	{
		if((a[i]-'0')==x)
			p++;
	}
	for(i=0;i<lb;i++)
	{
		if((b[i]-'0')==y)
			q++;
	}
	for(i=0;i<p;i++)
	{
		r=10*r+x;
	}
	for(i=0;i<q;i++)
	{
		s=10*s+y;
	}
	r=r+s;
	printf("%ld",r);
	return 0;
}
