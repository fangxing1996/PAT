//个位数统计 
#include<stdio.h>
#include<string.h>
int main()
{
	int shu[10] = {0}, len, i;
	char ch[1000];
	scanf("%s", ch);
	len = strlen(ch);
	for(i = 0; i < len; i++)
	{
		shu[ch[i] - '0']++;
	}
	for(i = 0; i < 10; i++)
	{
		if(shu[i] != 0)
			printf("%d:%d\n", i, shu[i]);
		else
			;
	}
	return 0;
} 
