#include<bits/stdc++.h>

using namespace std;
#include<map>
int main(){
	int i=0,j=0;
  int a[]={10,9,8,7,6,5,4,11,12,33};
  int cons=0;
  int lcons=0;
  int rcons=0;
  int len,llen=0,rlen=0;
  int maxlength=0;
  int number=0;
  int n=sizeof(a)/sizeof(a[0]);
   map<int,int>hashtable;
   for(i=0;i<n;i++)
          hashtable.insert(pair<int,int>(a[i],-1));
  for(i=0;i<n;i++){
        if(hashtable[a[i]]==-1){
                if(i==0){
                  hashtable[a[i]]=1;
                  cons=a[i]+1;
                  len=1;
                  j=i;
                  while(hashtable[cons]==-1 && j<n){
                      hashtable[cons]=1;
                      j++;
                     
                      cons++;
                      len++;
                      //cout<<"\n i=>"<<i<<" len=> "<<len;
                  } 

                  // left side.......*************************************
                  cons=a[i]-1;
                  j=i;

                  while(hashtable[cons]==-1 && j<n){
                      hashtable[cons]=1;
                      j++;
                     
                      cons--;
                      len++;
                      cout<<"\n i=>"<<i<<" len=> "<<len;
                  }

                  if(len>maxlength){
                          number=cons--;
                         //cout<<"\n len=> "<<len;
                       maxlength=len;
                     }
                }  
                else {
                    cout<<"\n a[i]:=>"<<a[i];
                     j=i;
                     llen=1;
                     hashtable[a[i]]=1;
                     lcons=a[i]-1;
                     while(j>=0 && hashtable[lcons]==-1) 
                      {
                        llen++;
                        hashtable[lcons]=1;
                        //number=lcons;
                        lcons--;

                        j--;
                      }
                   // for right consecutive

                      j=i;
                     rlen=1;
                     hashtable[a[i]]=1;
                     rcons=a[i]+1;;
                     while(j<=n && hashtable[rcons]==-1) 
                      {
                        rlen++;
                        hashtable[rcons]=1;
                        //number=rcons;
                        rcons++;
                        j++;
                      }
                if(maxlength<llen+rlen-1){
                    cout<<"\n llen is:=>"<<llen<<" rlen:=>"<<rlen;
                    number=lcons++;
                    maxlength=llen+rlen-1;}

                }

                
        }

  }

cout<<" \n maxlength"<< maxlength;

if(hashtable[--number]==1)
    cout<<"\n rightmost :=>"<<number;
else
   cout<<"\n leftmost:=>"<<number;
}