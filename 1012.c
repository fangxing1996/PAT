#include<stdio.h>
int main()
{
	int in[1000], n, i, a1 = 0, a2 = 0, a3 = 0, a5 = 0, count = 0, t = 0, p = 0;
    	float a4 = 0;
	scanf("%d", &n);
    	for(i = 0; i < n; i++)
	{
		scanf("%d", &in[i]);	
		if(in[i]%5 == 0 && in[i]%2 == 0)
			a1 += in[i];
		else if(in[i]%5 == 1)
		{
			if(count%2 == 0)
				a2 += in[i];
			else
				a2 -= in[i];
			count++;
		}
		else if(in[i]%5 == 2)
		{
			a3++;
		}
		else if(in[i]%5 == 3)
		{
			t++;
			a4 += in[i];
		}
		else if(in[i]%5 == 4)
		{
			if(p == 0)
			{
				a5 = in[i];
			}
			else
			{
				a5 = a5 > in[i] ? a5 : in[i];
			}
			p++;
		}
		
	}
	if(a1 == 0)
		printf("N ");
	else
		printf("%d ", a1);
	if(count == 0)
		printf("N ");
	else
		printf("%d ", a2);
	if(a3 == 0)
		printf("N ");
	else
		printf("%d ", a3);
	if(t == 0)
		printf("N ");
	else
	{
		a4 = a4/t;
		printf("%.1f ", a4);
	}
	if(p == 0)
    		printf("N");
    	else
		printf("%d", a5);
	return 0;
}
