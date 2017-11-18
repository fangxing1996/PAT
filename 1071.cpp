#include<stdio.h>
int main()
{
	int t,k,i;
	scanf("%d %d",&t,&k);
	int in[k][4];
	for(i=0;i<k;i++){
		scanf("%d %d %d %d",&in[i][0],&in[i][1],&in[i][2],&in[i][3]);
		if(in[i][2]>t)
		{
			printf("Not enough tokens.  Total = %d.\n",t);
		}
		else
		{
			if(in[i][1]==0)
			{
				if(in[i][0]>in[i][3])
				{
					t+=in[i][2];
					printf("Win %d!  Total = %d.\n",in[i][2],t);
				}
				else{
					t-=in[i][2];
					printf("Lose %d.  Total = %d.\n",in[i][2],t);
					if(t==0){
						printf("Game Over.");
						break;
					}
				}
			}
			else
			{
				if(in[i][0]<in[i][3]){
					t+=in[i][2];
					printf("Win %d!  Total = %d.\n",in[i][2],t);
				}
				else{
					t-=in[i][2];
					printf("Lose %d.  Total = %d.\n",in[i][2],t);
					if(t==0){	
						printf("Game Over.\n");
						break;
					}
						
				}
			}
		}
	}
	return 0;
}
