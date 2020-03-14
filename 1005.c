#include<stdio.h>
#include<stdlib.h>
int comp(const void *a, const void *b)
{
	return *(int*)b - *(int*)a;
}
int change(int a[], int i, int n)
{
	int j;
	for(j = 0; j < n; j++)
	{
		if(i == a[j])
			a[j] = 0;
	}
	return 0;
}
int panduan(int a[], int r, int n)
{
	if(r != 0)
	{
		while(r != 1)
		{
			if(r%2)
			{
				r = (3*r + 1)/2;
				change(a, r, n);	
			}
			else
			{
				r = r/2;
				change(a, r, n);
			}
		}
	}
	return 0;
}
int main()
{
	int x, i, t;
	scanf("%d", &x);
	int in[x];
	for(i = 0; i < x; i++)
	{
		scanf("%d", &in[i]);
	}
	for(i = 0; i < x; i++)
	{
		panduan(in, in[i], x);
	}
	qsort(in, x, sizeof(int), comp);
	i = 0;
	while(in[i++] != 0)
		;
	i--;
	t = i;
	for(i = 0; i < t - 1; i++)
	{
		printf("%d ", in[i]);
	}
	printf("%d", in[t - 1]);
	return 0;
}
