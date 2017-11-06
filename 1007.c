#include<stdio.h>
#include<math.h>
int isprime(int n)
{
	int i;
	if(n==1)
		return 0;
	else if(n==2||n==3||n==5||n==7)
		return 1;
	else
	{
		if(n%2==0||n%3==0||n%5==0||n%7==0)
			return 0;
		else
		{	
			for(i=2;i<=sqrt(n);i++)
			{
				if(!(n%i)) 
				{
					return 0;
					break; 
				}
				else if(i+1>(sqrt(n)+1))
					return 1;
			}
		} 
	}
}
int main()
{
	int x,i,m=2,d,nu=0;
	scanf("%d",&x);
	for(i=1;i<=x;i++)
	{
		if(isprime(i))
		{
			d=i-m;
			if(d==2)
			{
				nu++;
			}
			m=i;				
		}
	}
	printf("%d",nu);
	return 0;
}
