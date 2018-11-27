#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int fibo();
int getdigit(int n);
int getfibo(int n);
int main(void){
	int number[1000]={0},l=1000,p,d,div=0,r=0;
	clock_t start,end;double timetaken;
	srand(time(0));
	for(int i=0;i<l;i++){
		number[i]=rand()%10;
	}
	for(int i=0;i<l;i++){
                printf("%d",number[i]);
	}
	start=clock();
	p=fibo();
	printf("\nPeriod=%d",p);
	d=getdigit(p);
	for(int i=0;i<d-1;i++){
		div=div*10+number[i];
	}
	for(int i=d-1;i<l;i++){
		div=div*10+number[i];
		div=div%p;
//		printf("Iteration %d, r=%d\n",i-d,div);
	}
	printf("\nNumber=%d",div);
	r=getfibo(div);
	end=clock();
	timetaken=((double)end-start)/CLOCKS_PER_SEC;
	printf("\nFibonacci Is %d\t Time Taken (In Second): %lf",r,timetaken);
	return 0;
}
int fibo(){
	int a=0,b=1,count=0;
	while(1){
		int c=(a+b)%100000;
		a=b;
		b=c;
		count++;
		if(a==0&&b==1){break;}
	}
	return ((count>2)?count:0);
}
int getdigit(int n){
	int rem=0,count=0;
	while(n>0){
		count++;
		n=n/10;
	}
	return count;
}
int getfibo(int n){
        int a=0,b=1;
	for(int i=2;i<=n;i++){
                int c=(a+b)%1000000;
                a=b;
                b=c;
        }
        return b;
}



