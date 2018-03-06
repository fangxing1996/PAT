#include<stdio.h>
#include<string.h>
int f(int n){
	if(n==1)
		printf("MON "); 
	else if(n==2)
		printf("TUE ");
	else if(n==3)
		printf("WED ");
	else if(n==4)
		printf("THU ");
	else if(n==5)
	    printf("FRI ");
	else if(n==6)
		printf("SAT ");
	else if(n==7)
		printf("SUN ");
	return 0;
}
int main(){
	char a[61],b[61],c[61],d[61];
	int l1,l3,i=0,j=0,x=0;
	scanf("%s",a);
	scanf("%s",b);
	scanf("%s",c);
	scanf("%s",d);
	l1=strlen(a)>strlen(b)?strlen(b):strlen(a);
	l3=strlen(c)>strlen(d)?strlen(d):strlen(c);
	for(i=0;i<l1;i++){
		if(a[i]==b[i]){
			if(x==0){
				if(a[i]>='A'&&a[i]<='G'){
					f(a[i]-'A'+1);
					x++;
				}
			}
			else{
				if(a[i]>='A'&&a[i]<='N')
				{
					printf("%d:",a[i]-'A'+10);
					break;
				}
				else if(a[i]>='0'&&a[i]<='9')
				{
					printf("0%d:",a[i]-'0');
					break;
				}
			}
		}
	} 
	for(i=0;i<l3;i++){
		if(c[i]==d[i]){
			if((c[i]>='a'&&c[i]<='z')||(c[i]>='A'&&c[i]<='Z')){
				if(i<10)
					printf("0%d",i);
				else
					printf("%d",i);
				break;
			}
		}
	}
	return 0;
}
