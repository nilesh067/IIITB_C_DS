#include<stdio.h>
int min(int a,int b){
	if(a<=b)return a;
	else return b;
}
int countStep(int n){
	if(n==1)return 0;
	else if(n%2==0) return 1+countStep(n/2);
	else return min(1+countStep(n-1),1+countStep(n+1));
}
int main(){
	int x=15;
	printf("Step to reduce is :: %d",countStep(x));
}
