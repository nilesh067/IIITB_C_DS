#include<stdio.h>
void createTable(int amount,int j,int coin[j],int table[amount+1]);
void backtrack(int amount,int j,int coin[j],int table[amount+1]);
void printMatrix(int amount,int j,int table[amount+1]);
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
	int table[n+1];
	/*for(int i=0;i<j;i++){
		printf("coin[%d] valuse =%d\n",i+1,coin[i]);
	}*/
	createTable(n,j,coin,table);
	printMatrix(n,j,table);
	printf("No Of Coin Needed :: %d\n",table[n]);
	backtrack(n,j,coin,table);

}
void createTable(int amount,int j,int coin[j],int table[amount+1]){
	for(int i=0;i<=amount;i++){
	table[i]=i;
	}
	for(int i=2;i<=amount;i++){
		for(int k=1;k<j;k++){
			if(i>=coin[k]&&(1+table[i-coin[k]]<table[i])){
				table[i]=1+table[i-coin[k]];			
			}
		}
	}
}
void printMatrix(int amount,int j,int table[amount+1]){
	for(int i=0;i<=amount;i++){
			printf("amount[%d]=%d\n",i,table[i]);
			//*((arr+i*n) + j)
		}

}
void backtrack(int amount,int j,int coin[j],int table[amount+1]){
	int n=amount;
	int c=j-1;
	while(c>0){
	 if(table[n]==1+table[n-coin[c]]){
	 printf("Use coin of value [%d]\n",coin[c]);
	 n=n-coin[c];
	 }else {
	 c=c-1;
	 }
	}
	if(n>0){
	printf("Use [%d] coin [%d] value coin.\n",n,coin[c]);	
	}
}
