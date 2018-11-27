#include<stdio.h>
void createTable(int n,int j,int wt[j],int val[j],int table[j+1][n+1]);
void backtrack(int n,int j,int wt[j],int val[j],int table[j+1][n+1]);
void printMatrix(int n,int j,int table[j+1][n+1]);
void main(){
	int n,j;
	printf("Enter the no of Items\n");
	scanf("%d",&j);
	int wt[j],val[j];
	for(int i=0;i<j;i++){
		printf("item [%d] wt =",i+1);
		scanf("%d",&wt[i]);
		printf("\nitem [%d] val =",i+1);
		scanf("%d",&val[i]);
	}
	printf("knapscak Capacity\n");
	scanf("%d",&n);
	int table[j+1][n+1];
	/*for(int i=0;i<j;i++){
		printf("coin[%d] valuse =%d\n",i+1,coin[i]);
	}*/
	createTable(n,j,wt,val,table);
	printMatrix(n,j,table);
	printf("Max Profit :: %d\n",table[j][n]);
	backtrack(n,j,wt,val,table);

}
void createTable(int n,int j,int wt[j],int val[j],int table[j+1][n+1]){
	for(int i=0;i<=j;i++){
		table[i][0]=0;
	}
	for(int i=1;i<=n;i++){
	table[0][i]=0;
	}
	for(int i=1;i<=j;i++){
		for(int k=1;k<=n;k++){
			if(k>=wt[i-1]&&(val[i-1]+table[i-1][k-wt[i-1]])>table[i-1][k]){
				table[i][k]=(val[i-1]+table[i-1][k-wt[i-1]]);			
			}else{
				table[i][k]=table[i-1][k];
			}
		}
	}

}
void printMatrix(int amount,int j,int table[j+1][amount+1]){
	for(int i=0;i<=j;i++){
		for(int k=0;k<=amount;k++){
			printf("%d\t",table[i][k]);
			//*((arr+i*n) + j)
		}
		printf("\n");
		}

}
void backtrack(int n,int j,int wt[j],int val[j],int table[j+1][n+1]){
	int size=n;
	int c=j-1;
	while(size>0){
	 if(size>=wt[c]&&val[c]+table[c-1][size-wt[c]]>table[c-1][size]){
	 printf("Use item[%d] of value [%d]\n",c+1,val[c]);
	 size=size-wt[c];
	 }
	 c--;
	}

}
