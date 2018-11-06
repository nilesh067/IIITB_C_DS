#include<stdio.h>
int main(){
	long long int a,b,sum=0;
	scanf("%lld",&a);
	int i;	
	for(i=10;(i>0&&a>0);i--){
	b=a%10;
	a=a/10;
	printf("adding %lld * %d\n",b,i);
	sum=sum+b*i;
	}
	if((sum%11==0)&&(i==0))printf("valid isbn sum=%lld",sum);
	else printf("invalidvalid isbn sum =%lld",sum);
}
