#include<stdio.h>
#include<string.h>
int main()
{
	int N = 0, n0 = 0, n1 = 0;
	char c;
	while((c = getchar()) != '\n')
	{
		if(c >= 'a' && c <= 'z')
			N = N + c - 'a' + 1;
		else if(c >= 'A' && c <= 'Z')
		{
			N = N + c - 'A' + 1;
		}
	}
	if(N == 0)
	{
		printf("0 0");
	}
	else
	{
		while(N != 0)
		{
			if(N%2 == 0)
				n0++;
			else
				n1++;
			N = N/2;
		}
		printf("%ld %ld", n0, n1);
	}
	return 0;		
}
