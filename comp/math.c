#include<stdio.h>
int gcd(int a,int b){
	while(b!=0){
	int temp=b;
	b=a%b;
	a=temp;
	}
	return a;
}
int lcm(int a,int b){
	return (a*b)/gcd(a,b);
}
int gcdArr(int *arr,int n){
	int result=arr[0];
	for(int i=1;i<n;i++){
	result=gcd(result,arr[i]);
	}
	return result;
}
int lcmArr(int *arr,int n){
	int result=arr[0];
	for(int i=1;i<n;i++){
	result=lcm(result,arr[i]);
	}
	return result;
}
int main(){
	int a=24,b=26;
//	printf("gcd=%d\n",gcd(a,b));
	printf("lcm=%d\n",lcm(2,4));
	//int arr[] = { 2, 7, 3, 9, 4 };
	int arr[] = { 16, 32, 96};
	printf("gcdArr=%d\n",gcdArr(arr,3));
	printf("lcmArr=%d\n",lcmArr(arr,3));
}
