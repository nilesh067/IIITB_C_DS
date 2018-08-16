#include<stdio.h>
int main(){
	int i,j,k,n=1,s=2;long long int iteration=0;
	for(n=1;n<=100;n++){
		s=2;
		for(i=0;i<n;++i){
			for(j=0;j<n;++j){
				for(k=0;k<n;++k){
					s=2*s+1;
					iteration+=1;
				}	
			}
		}
	printf("For N=%d Value is : %i\n",n,s);
	printf("For N=%d Iteration is : %lld\n",n,iteration);
	}
	return 0;
}
