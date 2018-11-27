#include<stdio.h>
int getIndex(char ch){
        return (int)(ch-'a');
}

int main(){
	printf("%d\n",getIndex('d'));
}
