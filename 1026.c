#include<stdio.h>
int main()
{
	int x,r,s,t,e[2];
	float a,b,y;
	scanf("%f %f",&a,&b);
	a=(b-a)/100;
	x=a;
	y=x+0.5;
	if(a>=x&&a<y)
		;
	else
		x=x+1;
	r=x/3600;
	e[0]=r/10+'0';
	e[1]=r%10+'0';
	printf("%c%c:",e[0],e[1]);
	s=(x-r*3600)/60;
	e[0]=s/10+'0';
	e[1]=s%10+'0';
	printf("%c%c:",e[0],e[1]);
	t=x-r*3600-s*60;
	e[0]=t/10+'0';
	e[1]=t%10+'0';
	printf("%c%c",e[0],e[1]);
	return 0;
}
