#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
	
	char str[1000];
	char pat[1000];
	int d=10,k,m;
	bool flag=false;
	printf("Enter String ..\n");
	gets(str);
		printf("Enter Patern length\n");
	scanf("%d",&m);
		printf("Enter No of occurence Of Patern ..\n");
		scanf("%d",&k);
	int n=strlen(str);
	
	for(int y=0;y<n-m;y++){

	for(int i=0;i<m;i++){
		pat[i]=str[y+i];
		}
//	printf("size of String=%d\n",n);
//	printf("size of Patern=%d\n",m);
	
	int q=255,t=0,p=0;
	int h=1;
	for(int y=1;y<=(m-1);y++){
	h=h*d;	
	}
	h=(h%q);
//	printf("Value Of h=%d\n",h);
	for(int i=0;i<m;i++){
	
	p=((d*p)+pat[i])%q;
	//	printf("Value Of p=%d and pat[%d]=%d\n",p,i,pat[i]);
		t=((d*t)+str[i])%q	;
	//		printf("Value Of t=%d and str[%d]=%d\n",t,i,str[i]);	
	}
//	printf("Value Of p=%d\n",p);
		//printf("Value Of t=%d\n",t);
	int matchcount=0;
	for(int s=0;s<=n-m;s++){
	//	printf("%d th  Value Of t=%d\n",s,t);
		if(t<0){
			t=t+q;
		}
		if(p==t){
			int count=0;
			for(int k=0;k<m;k++){
				if(str[s+k]==pat[k]){
					count+=1;
				}else{
					break;
				}	
			}	
			if(count==m){
				matchcount+=1;
			//	printf("Patern match with %d shift\n",s);
			//	break;
			}
		}
			t=(((t-(h*str[s]))*d)+str[s+m])%q;
	
	}
//	printf("No Of Time Patern Mathc is %d\n",matchcount);
//	printf("Patern %s Found %d Times\n",pat,matchcount);

	if(matchcount==k)
	{
		flag=true;
	//	printf("Yes");
	//printf("Patern %s Found %d Times\n",pat,k);
	}
		}
		if(flag){
			printf("Yes");
		}else{
			printf("No");
		}
}
