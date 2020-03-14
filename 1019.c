#include<stdio.h>
int bubble(int a[], int n)
{
	int i, j, temp;
	for(i = 0; i < n; i++)
	{
		for(j = 1; j < n - i; j++)
		{
			if(a[j] > a[j - 1])
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
	int x, e[4], a, b;
	scanf("%d", &x);
	if(x == 6174)
		printf("7641 - 1467 = 6174");
	else
	{
		while(x != 6174)
		{
			e[0] = x%10;
			e[1] = (x/10)%10;
			e[2] = (x/100)%10;
			e[3] = x/1000;
			if(e[0] == e[1] && e[1] == e[2] && e[2] == e[3])
			{
				e[0] = '0' + e[0];
				printf("%c%c%c%c - %c%c%c%c = 0000\n", e[0], e[0], e[0], e[0], e[0], e[0], e[0], e[0]);
				break;
			}
			else
			{
				bubble(e, 4);
				a = e[0]*1000 + e[1]*100 + e[2]*10 + e[3];
				b = e[0] + e[1]*10 + e[2]*100 + e[3]*1000;
				x = a - b;
				e[0] = '0' + e[0];
				e[1] = '0' + e[1];
				e[2] = '0' + e[2];
				e[3] = '0' + e[3]; 
				printf("%c%c%c%c - %c%c%c%c = ", re[0], e[1], e[2], e[3], e[3], e[2], e[1], e[0]);
				e[0] = x%10 + '0';
				e[1] = (x/10)%10 + '0';
				e[2] = (x/100)%10 + '0';
				e[3] = x/1000 + '0';
				printf("%c%c%c%c\n", e[3], e[2], e[1], e[0]);
			}
		}
	}
	return 0;
}
