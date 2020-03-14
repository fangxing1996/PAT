#include<stdio.h>
int stdo(int n)
{
	if(n >= 0 && n <= 9)
		printf("00%d", n);
	else if(n >= 10 && n <= 99)
		printf("0%d", n);
	else
		printf("%d", n);
	return 0;
}
int main(){
	int m, n, a, b, x;
	scanf("%d %d %d %d %d", &m, &n, &a, &b, &x);
	int i, j, in[m][n];
	for(i = 0; i < m; i++)
	{
		for(j = 0; j < n; j++)
		{
			scanf("%d", &in[i][j]);
			if(in[i][j] >= a && in[i][j] <= b)
			{
				in[i][j] = x;
			}
		}
	}
	for(i = 0; i < m; i++)
	{
		for(j = 0; j < n; j++)
		{ 
			if(j == 0)
				stdo(in[i][j]);
			else if(j == n - 1)
			{
				printf(" ");
				stdo(in[i][j]);
				printf("\n");
			}
			else
			{
				printf(" ");
				stdo(in[i][j]);
			}
		}
	}
	return 0;
} 
