#include<stdio.h>
int divisor(int a, int b){
	int max, min, r;
	max = a > b ? a : b;
	min = a > b ? b : a;
	r = max % min;
	while(r)
	{
		max = min;
		min = r;
		r = max%min;
	}
	return min;
}
int swap(int *x, int *y)
{
	int temp;
	if(*x > *y)
	{
		temp = *x;
		*x = *y;
		*y = temp;
	}
	return 0;
}
int main(){
	int a, b, c, d, n, t, x, y, z, i, count = 0;
	scanf("%d/%d %d/%d %d", &a, &b, &c, &d, &n);
	t = b*d/divisor(b, d);
	t = t*n/divisor(t, n);
	x = t/b*a;
	y = t/d*c;
	swap(&x, &y);
	z = t/n;
	i = x + 1;
	for(; i < y; i++)
	{
		if(divisor(i, t) == z)
		{
			if(count == 0)
			{
				printf("%d/%d", i/z, n);
				count++;					
			}
			else
				printf(" %d/%d", i/z, n);
		}
	}
	return 0;
}
