#include<stdio.h>
#include<string.h>
int main(){
int N;
char s[15];
//char *s;
    scanf("%d\n",&N);
//    scanf("%s",s); //terminate whe occure whitespace or EOF
//	scanf("%15s",s); //terminate whe occure whitespace or EOF not give any segmentation fault when array limit reached
	scanf(" %15[^\n]",s); //take input till new line char now occure 
//	scanf(" %15[^$]",s); //take input till new line char now occure 
//    gets(s);
    printf("%d\n",2*N);
    printf("%s",s);
    printf("Size of buff :: %ld",strlen(s));
    char z[15];
    z="abc";
    printf("%s",z);
    }
