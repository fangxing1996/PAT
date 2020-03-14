#include<stdio.h>
int bubble(int a[], int n)
{
	int i, j, temp;
	for(i = 0; i < n; i++)
	{
		for(j = 1; j < n - i; j++)
		{
			if(a[j] < a[j - 1])
			{
				temp = a[j];
				a[j] = a[j - 1];
				a[j - 1] = temp;
			}
		}
	}
	return 0;
}
int main()
{
	int n, i, j, t = -1, sum=0;
	scanf("%d", &n);
	int s[n];
	for(i = 0; i < n; i++)
	{
		scanf("%d", &s[i]);
	}
	bubble(s, n);
	for(i = 0; i < n; i++)
	{
		if(s[i] != t)
		{
			for(j = i + 1; j < n; j++)
			{
				if(s[i] == s[j])
				{	
					sum += s[i]*10 + s[i];
					t = j;
				}
				else
					sum += (s[i] + s[j])*11;
			}
		}
	}
	printf("%d", sum);
	return 0;
}
