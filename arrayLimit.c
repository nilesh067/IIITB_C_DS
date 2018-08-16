#include<stdio.h>
int main(){
long double array[1000000]={0.0};
long long int length=(sizeof(array)/sizeof(array[0]));
printf("\nSize of array is %lld\n",length);
return 0;
}
