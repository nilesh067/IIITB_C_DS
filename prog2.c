#include<stdio.h>
int main(){
	unsigned int i=4294967290;
	int j=-2147483648;
	     //2147483648
	/*printf("Size Of short  %d\n",(sizeof(short)));
	printf("Size Of short int  %d\n",(sizeof(short int)));
	printf("Size Of Unsign Int %d\n",(sizeof(unsigned int)));
	printf("Size Of sign Int %d\n",(sizeof(signed int)));
	printf("Size Of Int %d\n",(sizeof(int)));
	printf("Size Of long Int %d\n",(sizeof(long int)));	
	printf("Size Of long long Int %d\n",(sizeof(long long int)));
	printf("Size Of float  %d\n",(sizeof(float)));
	printf("Size Of double %d\n",(sizeof(double)));
	printf("Size Of long double  %d\n",(sizeof(long double))); */


	for(int k=0;k<=10;k++){
		printf("Unsigned Int %u\n",(i+k));
                printf("Signed Int %d\n",(j-k));
		      }
}
