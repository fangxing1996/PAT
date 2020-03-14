#include<stdio.h>
int main()
{
	int n, m, i, j;
	scanf("%d", &n);
	scanf("%d", &m);
	int score[m] = {0}, answer[m] = {0}, in[n][m] = {0}, out[n] = {0};
	for(i = 0; i < m; i++)
		scanf("%d", &score[i]);
	for(i = 0; i < m; i++)
		scanf("%d", &answer[i]);
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < m; j++)
		{
			scanf("%d", &in[i][j]);
			if(in[i][j] == answer[j])
				out[i] = out[i] + score[j];
		}
	}
	for(i = 0; i < n; i++)
		printf("%d\n", out[i]);
	return 0;
}
