#include<stdio.h>
int isPrime(int n);
int main(){
int n;
scanf("%d",&n);
if(isPrime(n)) printf("True");
else printf("False");
}
int isPrime(int n){
	for(int i=2;i<=n/2;i++){
	if(n%i==0)return 0;
	}
	return 1;
	}
