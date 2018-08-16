#include<stdio.h>
int main(){
int n=5;
for(int i=1;i<=n;i++){
    int temp=n-i;
    while(temp>0){
        printf(" ");
        temp--;
    }
    for(int j=1;j<=i;j++){
      printf("#");  
    }
    printf("\n");
}
return 0;
}
