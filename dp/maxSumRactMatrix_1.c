#include<stdio.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>
#define N 4
#define M 5
int findMaxSum(int matrix[N][M],int wt[N][M]){
	int max=INT_MIN;

	for(int a=0;a<N;a++){
		for(int b=0;b<M;b++){
			for(int c=a;c<N;c++){
				for(int d=b;d<M;d++){
					int sum=0;
					if(a>0&&b>0){
						sum=wt[c][d]-wt[a-1][d]-wt[c][b-1]+wt[a-1][b-1];
					}else if(a>0){
						sum=wt[c][d]-wt[a-1][d];
					}else if(b>0){
						sum=wt[c][d]-wt[c][b-1];
					}else{
						sum=wt[c][d];
					}
					if(sum>max)max=sum;
				}
			}
		}
	}
	return max;
}
int main(){
	int matrix[N][M] = {{1, 2, -1, -4, -20}, 
                       {-8, -3, 4, 2, 1}, 
                       {3, 8, 10, 1, 3}, 
                       {-4, -1, 1, 7, -6} 
                      };
	int wt[N][M];
	for(int i=0;i<M;i++){
		wt[0][i]=matrix[0][i];	
	}
	for(int i=1;i<N;i++){
		for(int j=0;j<M;j++){
			wt[i][j]=wt[i-1][j]+matrix[i][j];
		}
	}
	for(int i=0;i<N;i++){
		for(int j=1;j<M;j++){
		wt[i][j]=wt[i][j-1]+wt[i][j];
		}
	}
	int max=findMaxSum(matrix,wt);
	printf("MaxSum=%d\n",max);
}
