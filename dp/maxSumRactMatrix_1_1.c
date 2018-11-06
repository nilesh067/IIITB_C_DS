#include<stdio.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>
#define N 4
#define M 4
int findMaxSum(int matrix[N][M],int wt[N][M]){
	int max=INT_MIN;
	int max_a,max_b,max_c,max_d;
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
					if(sum>max){max=sum;max_a=a;max_b=b;max_c=c;max_d=d;};
				}
			}
		}
	}
	printf("a=%d,b=%d,c=%d,d=%d",max_a,max_b,max_c,max_d);
	return max;
}
int main(){
	int matrix[N][M] = {{5, -7, -8, 4}, 
                       {3, 1, 2, 6}, 
                       {2, -5, 4, -9}, 
                       {4, 2, 2,6} 
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
