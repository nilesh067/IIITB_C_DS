#include<stdio.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>
#define N 4
#define M 5
int findMaxSum(int matrix[N][M]){
	int max=INT_MIN;

	for(int a=0;a<N;a++){
		for(int b=0;b<M;b++){
			for(int c=a;c<N;c++){
				for(int d=b;d<M;d++){
					int sum=0;
					for(int i=a;i<c+1;i++){
						for(int j=b;j<d+1;j++){
							sum=sum+matrix[i][j];
						}
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
	int max=findMaxSum(matrix);
	printf("MaxSum=%d\n",max);
}
