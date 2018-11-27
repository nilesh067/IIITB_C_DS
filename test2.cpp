#include <iostream>
using namespace std;

int find(int A[1000][1000], int n, int m)
{   return 0;
}

int main()
{
    int A[1000][1000],i,j,k,n,m,t;
	t=10; n=4; m=3; 

	while(t-->0){
		cout<<n<<'\t'<<m;
		j=23421;
		for(i=0;i<n;++i)
		for(k=0;k<m;++k){
			if(j%1000<10)	A[i][k]=0;
			else A[i][k]=1;
			j=j*j+2*i*(t+2)+1; if (j<0) j=j*-1;
		}
	cout<<"\t"<<find(A,n,m)<<"\n";
	  n=1.15*n+57;m=1.1*m+71;
	}

 
    return 0;
}
