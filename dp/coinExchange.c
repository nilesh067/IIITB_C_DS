#include<stdio.h>
void createTable(int amount,int j,int coin[j],int table[amount+1][j]);
void backtrack(int amount,int j,int coin[j],int table[amount+1][j]);
void printMatrix(int amount,int j,int table[amount+1][j]);
void main(){
	int n,j;
	printf("Enter the no of Coin\n");
	scanf("%d",&j);
	int coin[j];
	for(int i=0;i<j;i++){
		printf("coin[%d] valuse =",i+1);
		scanf("%d",&coin[i]);
	}
	printf("Enter Amount To Be paid\n");
	scanf("%d",&n);
	int table[n+1][j];
	/*for(int i=0;i<j;i++){
		printf("coin[%d] valuse =%d\n",i+1,coin[i]);
	}*/
	createTable(n,j,coin,table);
	printMatrix(n,j,table);
	printf("No Of Coin Needed :: %d\n",table[n][j-1]);
	backtrack(n,j,coin,table);

}
void createTable(int amount,int j,int coin[j],int table[amount+1][j]){
	for(int i=0;i<j;i++){
	table[0][i]=0;
	}
	for(int i=1;i<=amount;i++){
	table[i][0]=i;
	}
	for(int i=1;i<=amount;i++){
		for(int k=1;k<j;k++){
			if(i>=coin[k]&&(1+table[i-coin[k]][k])<table[i][k-1]){
				table[i][k]=1+table[i-coin[k]][k];			
			}else{
				table[i][k]=table[i][k-1];
			}
		}
	}
}
void printMatrix(int amount,int j,int table[amount+1][j]){
	for(int i=0;i<=amount;i++){
		for(int k=0;k<j;k++){
			printf("%d\t",table[i][k]);
			//*((arr+i*n) + j)
		}
		printf("\n");
		}

}
void backtrack(int amount,int j,int coin[j],int table[amount+1][j]){
	int n=amount;
	int c=j-1;
	while(c>0){
	 if(table[n][c]==table[n][c-1]){
	 c=c-1;
	 }else {
	 printf("Use coin of value [%d]\n",coin[c]);
	 n=n-coin[c];
	 }
	}
	if(n>0){
	printf("Use [%d] coin [%d] value coin.\n",n,coin[c]);	
	}


}
