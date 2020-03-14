#include<stdio.h>
int main()
{
	int n, i, j, mark[1001] = {0};
	scanf("%d", &n);
	int in[n][3];
	for(i = 0; i < n; i++)
	{
		scanf("%d-%d %d", &in[i][0], &in[i][1], &in[i][2]);
		mark[in[i][0]] += in[i][2];
	}
	int nu = 1, max = mark[1];
	for(i = 2; i < 1001; i++)
	{
		if(mark[i] > max)
		{
			max = mark[i];
			nu = i;
		}
	}
	printf("%d %d", nu, max);
	return 0;
}
