#include<stdio.h>
#include<string.h>
int main()
{
	char a[101],b[101];
	int la,lb,i,t;
	scanf("%s %s",a,b);
	la=strlen(a);
	lb=strlen(b);
	if(la>lb)
	{
		for(i=0;i<lb;i++)
		{
			if(i%2==0)
			{
				t=(a[la-1-i]-'0'+b[lb-1-i]-'0')%13;
				if(t==10)
					a[la-1-i]='J';
				else if(t==11)
					a[la-1-i]='Q';
				else if(t==12)
					a[la-1-i]='K';
				else	
					a[la-1-i]=t+'0';
			}
			else
			{
				t=b[lb-1-i]-a[la-1-i];
				if(t<0)
					a[la-1-i]=t+10+'0';
				else
					a[la-1-i]=t+'0';
			}
		}
		for(i=lb;i<la;i++)
		{
			if(i%2==0)
			{
									
			}
			else
			{
				t=-(a[la-1-i]-'0');
				if(t<0)
					a[la-1-i]=t+10+'0';
				else
					a[la-1-i]=t+'0';
			}
		}
		printf("%s",a);
	}
	else
	{
		for(i=0;i<la;i++)
		{
			if(i%2==0)
			{
				t=(a[la-1-i]-'0'+b[lb-1-i]-'0')%13;
				if(t==10)
					b[lb-1-i]='J';
				else if(t==11)
					b[lb-1-i]='Q';
				else if(t==12)
					b[lb-1-i]='K';
				else	
					b[lb-1-i]=t+'0';
			}
			else
			{
				t=b[lb-1-i]-a[la-1-i];
				if(t<0)
					b[lb-1-i]=t+10+'0';
				else
					b[lb-1-i]=t+'0';
			}
		}
		printf("%s",b);
	}
	return 0;
}
