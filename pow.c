#include<stdio.h>
int power(int x,int n);
int main(){
	int x,n;
	printf("Enter Numebr\n");
	scanf("%d",&x);
	printf("Enter Power\n");
	scanf("%d",&n);
	printf("Number=%d and Power=%d",x,n);
	printf("\nOutput=%d",power(x,n));
}
int power(int x,int n){
	int y=1;
	if(n==0)return 1;
	while(n>0){
		if(n%2==1)y=y*x;
		x=x*x;
		n=n/2;
	}
	return y;
}


