#include<stdio.h>
#include<string.h>
void createTable(int l1,int l2,char *arr,char *arr2,int table[l1+1][l2+1]){
	for(int i=0;i<=l2;i++){
		table[0][i]=0;
	}
	for(int i=1;i<=l1;i++){
		table[i][0]=0;
		}
	for(int i=1;i<=l1;i++){
		for(int j=1;j<=l2;j++){
			if(arr[i-1]==arr2[j-1]){
				table[i][j]=1+table[i-1][j-1];
			}else{
				if(table[i-1][j]>table[i][j-1]){
				table[i][j]=table[i-1][j];
				}else table[i][j]=table[i][j-1];
			}
		}
	}
}
void printTable(int l1,int l2,int table[l1+1][l2+1]){
	for(int i=0;i<=l1;i++){
		for(int j=0;j<=l2;j++){
			printf("%d\t",table[i][j]);
		}printf("\n");
	}
}
void backTrack(int l1,int l2,char *arr,char *arr2,int table[l1+1][l2+1]){
	int i=l1,j=l2;
	while(i>0&&j>0){
		if(arr[i-1]==arr2[j-1]){
			printf("%c\t",arr[i-1]);
			i--;j--;
		}else if(table[i-1][j]<=table[i][j-1]){
			j--;
		}else{
			i--;
		}
	
	}


}
int main(){
	int l1=7,l2=7;
	/*printf("Enter Length of First String :: \n");
	scanf("%d",&l1);
	printf("Enter Length of Second String :: \n");
	scanf("%d",&l2);*/
	//printf("\n");
	char arr2[]={'C','B','A','B','A','C','A'};
	char arr[]={'A','B','C','A','B','B','A'};
	for(int i=0;i<l1;i++){
	printf("arr[%d]=%c\n",i,arr[i]);
	}
	printf("\n");
	for(int i=0;i<l2;i++){
	printf("arr2[%d]=%c\n",i,arr2[i]);
	}
	l1=sizeof(arr)/sizeof(arr[0]);
	l2=sizeof(arr2)/sizeof(arr2[0]);
	int table[l1+1][l2+1];
	createTable(l1,l2,arr,arr2,table);
	printTable(l1,l2,table);
	printf("LCS=%d\n",table[l1][l2]);
	backTrack(l1,l2,arr,arr2,table);
}
