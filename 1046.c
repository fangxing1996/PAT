#include<stdio.h>
int main()
{
	int a1, a2, b1, b2, temp, i, ta = 0, tb = 0;
	scanf("%d", &temp);
	for(i = 0; i < temp; i++)
	{
		scanf("%d%d%d%d", &a1, &a2, &b1, &b2);
		if(a2 == (a1 + b1) && b2 != (a1 + b1))
			tb++;
		else if(a2 != (a1 + b1) && b2 == (a1 + b1))
			ta++;
		else
			;
	}
	printf("%d %d", ta, tb);
	return 0;
	
}
