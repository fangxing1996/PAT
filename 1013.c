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
		if((n%2==0)||(n%3==0)||(n%5==0)||(n%7==0))
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
	int m,n,count=0,i=2,prime[10000];
	scanf("%d%d",&m,&n);
	while(count<n)
	{
		if(isprime(i))
		{
			prime[count]=i;
			count++;
		}
		i++;
	}
	count=0;
	for(i=m-1;i<n-1;i++)
	{
		if(count==9)
		{
			printf("%ld\n",prime[i]);
			count=0;
		}
		else
		{
			printf("%ld ",prime[i]);
			count++;
		}
	}
	printf("%ld",prime[n-1]);
	return 0;
}
