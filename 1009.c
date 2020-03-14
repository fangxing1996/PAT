#include<stdio.h>
int main()
{
	int flag = 1, count = 0, i = 0;
	char *a, b[100], x, *s[40];
	while((x = getchar()) != '\n')
	{
		b[i] = x;
		i++;
	}
	b[i] = '\0';
	a = b;
	i = 0;
	while(*(a++) == ' ')
		;
	a--;
	while(*a != '\0')
		b[i++] = *(a++);
	b[i] = '\0';
	a = b;
	while(*a != '\0')
	{
		if(*a != ' ')
		{
			if(flag)
			{
				flag = 0;
				s[count++] = a;
				
			}
		}
		else
		{
			*a = '\0';
			flag = 1;
		}
		a++;
	}
	printf("%s", s[count - 1]);
	for(i = count - 2; i >= 0; i--)
		printf(" %s", s[i]);
	return 0;
}
