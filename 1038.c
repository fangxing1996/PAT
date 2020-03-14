#include<stdio.h>
int count[101] = {0};
int main()
{
	int n, i, s;
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		scanf("%d", &s);
		count[s]++;
	}
	int m;
	scanf("%d", &m);
	for(i = 0; i < m - 1; i++)
	{
		scanf("%d", &s);
		printf("%d ", count[s]);
	}
	scanf("%d", &s);
	printf("%d", count[s]);
	return 0;
}
