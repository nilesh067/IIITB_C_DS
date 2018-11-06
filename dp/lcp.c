#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int MAX(int a,int b);
void createTable(int l1,char *arr,int table[l1][l1]){
	for(int x=0;x<l1;x++){
		table[x][x]=1;
	}
	for(int k=1;k<l1;k++){
		for(int i=0;i<=l1-k;i++){
			int j=i+k;
		printf("arr[%d][%d]",i,j);
			if(arr[i]==arr[j]){
				table[i][j]=2+table[i+1][i-1];
			}else{
				table[i][j]=MAX(table[i][j-1],table[i+1][j]);		
			}
		}
		printf(" k=%d\n",k);
	}
}
void printTable(int l1,int table[l1][l1]){
	for(int i=0;i<l1;i++){
		for(int j=0;j<l1;j++){
			printf("%d\t",table[i][j]);
		}printf("\n");
	}

}
int MAX(int a,int b){
	if(a>=b)return a;
	else return b;
}
/*void backTrack(int l1,char *arr,int table[l1+1][l1+1]){
	int i=l1,j=l2;
	while(i>0&&j>0){
		if(arr[i]==arr2[j]){
			printf("%c\t",arr[i]);
			i--;j--;
		}else if(table[i-1][j]<=table[i][j-1]){
			j--;
		}else{
			i--;
		}
	
	}


}*/
int main(){
	int l1=7,l2=7;
	/*printf("Enter Length of First String :: \n");
	scanf("%d",&l1);
	printf("Enter Length of Second String :: \n");
	scanf("%d",&l2);*/
	//printf("\n");
	char arr[]={'M','A','D','A','M'};
//	char arr[]={'A','B','C','A','B','B','A'};
	l1=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<l1;i++){
	printf("arr[%d]=%c\n",i,arr[i]);
	}
	printf("\n");
//	l2=sizeof(arr2)/sizeof(arr2[0]);
	int table[l1][l1];
	memset(table,0, sizeof(table[0][0]) * l1 * l1);
	createTable(l1,arr,table);
	printTable(l1,table);
	printf("LPS=%d\n",table[0][l1-1]);
	//backTrack(l1,l2,arr,arr2,table);
}
