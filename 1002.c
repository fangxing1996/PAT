#include<stdio.h>
#include<string.h>
char ch[15];
int i = 0;
/*整数拼音输出*/
int pinyin(int n)
{
	switch(n)
	{
		case 9:ch[i++] = 'j';
				ch[i++] = 'i';
				ch[i++] = 'u';
				ch[i++] = ' ';
				break;
		case 8:ch[i++] = 'b';
				ch[i++] = 'a';
				ch[i++] = ' ';
				break;
		case 7:ch[i++] = 'q';
				ch[i++] = 'i';
				ch[i++] = ' ';
				break;
		case 6:ch[i++] = 'l';
				ch[i++] = 'i';
				ch[i++] = 'u';
				ch[i++] = ' ';
				break;
		case 5:ch[i++] = 'w';
				ch[i++] = 'u';
				ch[i++] = ' ';
				break;
		case 4:ch[i++] = 's';
				ch[i++] = 'i';
				ch[i++] = ' ';
				break;
		case 3:ch[i++] = 's';
				ch[i++] = 'a';
				ch[i++] = 'n';
				ch[i++] = ' ';
				break;
		case 2:ch[i++] = 'e';
				ch[i++] = 'r';
				ch[i++] = ' ';
				break;
		case 1:ch[i++] = 'y';
				ch[i++] = 'i';
				ch[i++] = ' ';
				break;
		case 0:ch[i++] = 'l';
				ch[i++] = 'i';
				ch[i++] = 'n';
				ch[i++] = 'g';
				ch[i++] = ' ';
				break; 
	}
	return 0;
} 
/*整数字符串输出*/ 
int printd(int n)
{
	if(n/10)
	{
		printd(n/10);
			
	}
	pinyin(n%10);
	return 0;
}
int main()
{
	int n = 0, len;
	char in[100];
	scanf("%s", in);
	len = strlen(in);
	for(i = 0; i < len; i++)
		n = n + in[i] - '0';
	i = 0;
	printd(n);
	i--;
	ch[i] = '\0';
	printf("%s", ch);
	return 0;
}
