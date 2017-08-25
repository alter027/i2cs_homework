#include<stdio.h>
#define size 256
#define allsize size*size
int num[10][allsize+10]={0},finish[10][size*2+3]={0};
int main(void){
	int n,m;
	scanf("%d%d",&n,&m);
	int i,j,k,input;
	for(i=0;i<n;i++){
		for(j=0;j<m*m;j++){
			scanf("%d",&input);
			num[i][input-1]=j;
		}
	}
	int row,col;
	int count;
	int ans[256]={0};
	for(i=0;i<m*m;i++){
		count=0;
		scanf("%d",&input);
		input--;
		for(j=0;j<n;j++){
			row=num[j][input]/m;
			col=num[j][input]%m;
			finish[j][row]++;
			finish[j][m+col]++;
			if(row==col)
				finish[j][2*m]++;
			if(row+col==m-1)
				finish[j][2*m+1]++;
			if(finish[j][row]==m||finish[j][m+col]==m||finish[j][2*m]==m||finish[j][2*m+1]==m){
				ans[count++]=j;
			}
		}
		if(count>0){
			printf("%d ",input+1);
			for(j=0;j<count;j++)
				printf("%d ",ans[j]);
			printf("\n");
			break;
		}
	}
	for(;i<m*m;i++)
		scanf("%d",&input);
	return 0;
} 
