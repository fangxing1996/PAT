#include<stdio.h>
#include<string.h>
int bubble(char a[], int n)
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
	char a[1001], b[1001];
	int t = 0, len_a, len_b, i, j, k;
	scanf("%s", a);
	scanf("%s", b);
	len_a = strlen(a);
	len_b = strlen(b);
	bubble(a, len_a);
	bubble(b, len_b);
	k = 0;
	for(i = 0; i < len_b; i++)
	{
		for(j = k; j < len_a; j++)
		{
			if(b[i] == a[j])
			{
				k = j + 1;
				t++;
				break;
			}
		}
	}
	if(t == len_b)
	{
		printf("Yes %d", len_a - len_b);
	}
	else
		printf("No %d", len_b - t);
	return 0;
}
