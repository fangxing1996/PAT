#include<stdio.h>
int main()
{
	int a, s[3] = {0}, i;
	scanf("%d", &a);
	if((a > 0 && a < 10))
	{
		for(i = 1; i < a + 1; i++)
			printf("%d", i);
	}
	else if(a < 100)
	{
		for(i = 1; i < (a/10 + 1); i++)
			putchar('S');
		for(i = 1; i < (a%10 + 1); i++)
			printf("%d", i);
	}
	else if(a < 1000)
	{
		for(i = 1; i < (a/100 + 1); i++)
			putchar('B');
		for(i = 1; i < ((a/10)%10 + 1); i++)
			putchar('S');
		for(i = 1; i < (a%10 + 1); i++)
			printf("%d", i);
	}
	return 0;
}
