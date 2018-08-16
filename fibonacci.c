
#include<stdio.h>
#include<time.h>
int fibo(int n);
int main(){
	int n;
	clock_t start,end;
	double time_taken;
	printf("Enter The Number \t");
	scanf("%d",&n);
	start=clock();
	int result=fibo(n);
	end=clock();
	time_taken=((double)end-start)/CLOCKS_PER_SEC;
	printf("Fibo=%d\t Time Taken(in Second) : %lf",result,time_taken);
	return 0;
}
int fibo(int n){
	if(n==0){
		return 0;
	}else if(n==1){
		return 1;
	}else{
		return (fibo(n-1)+fibo(n-2))%100;
	}
}

