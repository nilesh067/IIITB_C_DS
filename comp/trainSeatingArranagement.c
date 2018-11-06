#include <stdio.h>
int MS(int n);
int AS(int n);
int main(){
	int num,N;
	scanf("%d", &num);              			// Reading input from STDIN
	for(int i=1;i<=num;i++){
	    	scanf("%d", &N);  
	    	int d=N/12;
	    	int r=N%12;
	    	int font;
	    	if(r==0){
	    	    font=N-11;
	    	}else{
	    	    font=d*12+(13-r);
	    	}
	    	if(MS(font))printf("\n%d MS",font);
	    	else if(AS(font))printf("\n%d AS",font);
	    	else printf("\n%d WS",font);
	}
}
int MS(int n){
    n=n-2;
    if(n%3==0)return 1;
    else return 0;
}
int AS(int n){
    int a=n+(n+1)-7;
    int b=n+(n-1)-7;
    if(a%12==0||b%12==0)return 1;
    else return 0;
}
