#include<stdio.h>
int flag(char *a,char b,int x){
	int j;
	for(j=0;j<x;j++){
		if(a[j]==b)
			return 1;
	}
	return 0;
}
int main(){
	char ch[81],r[81],badkey[81],c;
	int i=0,j=0,count=0;
	while((c=getchar())!='\n'){
		ch[i++]=c;
	}
	ch[i++]='\0';
	while((c=getchar())!='\n'){
		r[j++]=c;
	}
	r[j++]='\0';
	char *m=ch,*n=r;
	while(*m!='\0'&&n!='\0'){
		if(*m!=*n){
			if(*m<='z'&&*m>='a'){
				if(flag(badkey,*m-'a'+'A',count))
					;
				else{
					badkey[count++]=*m-'a'+'A';
				}
			}
			else{
				if(flag(badkey,*m,count))
					;
				else{
					badkey[count++]=*m;
				}
			}
			m++;
		}
		else{
			m++;
			n++;
		}
	}
	badkey[count]='\0';
	printf("%s",badkey);
	return 0;
}
