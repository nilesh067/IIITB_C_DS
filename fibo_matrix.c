#include<stdio.h>
#include<time.h>
void power(int a[2][2],int n);
void MM(int a[2][2],int b[2][2]);
	int main(){
	int n,res[2][2]={1,1,1,0};
	scanf("%d",&n);
	clock_t start,end;double diff;
	start=clock();
	power(res,n-1);
        end=clock();
	diff=((double)(end-start))/CLOCKS_PER_SEC;
	printf("fibo=%d\t time : %lf",res[0][0],diff);
	return 0;
	}
void power(int a[2][2],int n){
	int mat[2][2]={1,0,0,1};
	if(n>2){
		while(n>0){
			if(n%2==1)MM(mat,a);
			MM(a,a);
			n=n/2;
		}
		a[0][0]=mat[0][0];
	        a[0][1]=mat[0][1];
        	a[1][0]=mat[1][0];
        	a[1][1]=mat[1][1];

	}
}
void  MM(int a[2][2],int b[2][2]){
	int c[2][2];
	c[0][0]=(a[0][0]*b[0][0]+a[0][1]*b[1][0])%100;
	c[0][1]=(a[0][0]*b[0][1]+a[0][1]*b[1][1])%100;
	c[1][0]=(a[1][0]*b[0][0]+a[1][1]*b[1][0])%100;
	c[1][1]=(a[1][0]*b[0][1]+a[1][1]*b[1][1])%100;
	a[0][0]=c[0][0];
	a[0][1]=c[0][1];
	a[1][0]=c[1][0];
	a[1][1]=c[1][1];
}


