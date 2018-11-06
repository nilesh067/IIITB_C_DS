// C program to generate random numbers 
#include <stdio.h> 
#include <stdlib.h> 
#include<time.h> 
  
// Driver program 
long long int generateAccountNo();
int main(void) 
{ 
    // This program will create different sequence of  
    // random numbers on every program run  
  
    // Use current time as seed for random generator 
    srand(time(0)); 
  
    for(int i = 0; i<5; i++) 
        printf(" %d ", rand()%100); 
  printf(" %lld ", generateAccountNo());
    return 0; 
}
long long int generateAccountNo(){
         srand(time(0));
         long long int random=rand()%10000000;
         return random;
}

