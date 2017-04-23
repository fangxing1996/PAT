#include<stdio.h>
int main()
{
	char ch;
	int a,row,col,i,j;
	scanf("%d %c",&a,&ch);
	col=a;
	if(a/2)
		row=(a+1)/2;
	else
		row=a/2;
	for(i=1;i<=row;i++)
	{
		if(i==1||i==row)
		{
			for(j=1;j<=col;j++)
				putchar(ch);
		}
		else
		{
			for(j=1;j<=col;j++)
			{
				if(j==1||j==col)
					putchar(ch);
				else
					putchar(' ');
			}
		}
		putchar('\n');		
	}
	return 0;
}
