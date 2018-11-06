#include<stdio.h>
#include<time.h>
int main(){
	long long int n;
	int arr[1000000];
	clock_t start,end;
	double time_taken;
	arr[0]=0;
	arr[1]=1;
	printf("Enter The Number \t");
	scanf("%lld",&n);
	start=clock();
	for(int i=2;i<=n;++i){
	arr[i]=(arr[i-1]+arr[i-2])%1000000;
	}
	int result=arr[n];
	end=clock();
	time_taken=((double)end-start)/CLOCKS_PER_SEC;
	printf("Fibo=%d\t Time Taken(in Second) : %lf",result,time_taken);
	/*for(int i=0;i<=n;++i){
        	printf("Fibo[%d]=%d\t",i,arr[i]);
//		printf("%d\t",arr[i]);
        }*/

	return 0;
}

