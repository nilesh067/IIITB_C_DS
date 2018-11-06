#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<limits.h>
void createTable(int n,int p[n],int table[n][n]){
	
	for(int j=1;j<n-1;j++){
		int k=j+1;
		table[j][k]=p[j-1]*p[j]*p[k];
	}
	
	for(int i=2;i<n;i++){
		for(int j=1;j<n-i;j++){
			int k=j+i;
			table[j][k]=INT_MAX;
			for(int x=j;x<k;x++){
			int q=table[j][x]+table[x+1][k]+p[j-1]*p[x]*p[k];
			if(q<table[j][k])table[j][k]=q;
			}
			printf("arr[%d][%d]",j,k);
			
		}
		printf("\n");
	}	
}
void printTable(int n,int table[n][n]){
	for(int i=1;i<n;i++){
		for(int j=1;j<n;j++){
		printf("%d\t",table[i][j]);
		}
		printf("\n");
	}
}
int main(){
	//int arr[] = {1, 10, 5, 2,25,4}; 
	int arr[] = {1, 2, 3, 4}; 
    int size = sizeof(arr)/sizeof(arr[0]); 
    int table[size][size];
    memset(table,0,sizeof(table));
    createTable(size,arr,table);
    printTable(size,table);
}
