import java.util.Arrays;
class Triplet{
public void isTriplate1(int arr[],int n){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			for(int k=j+1;k<n;k++){
//				System.out.println("I="+i+",J="+j+",K="+k);
				int x=arr[i]*arr[i],y=arr[j]*arr[j],z=arr[k]*arr[k];
				if(x==y+z||y==x+z||z==x+y){
					System.out.println(" Triplet Exist at I="+i+",J="+j+",K="+k);
				}
			}
		}
	}
}
public void isTriplate(int arr[],int n){
	for(int i=0;i<n;i++){
	arr[i]=arr[i]*arr[i];
	}
	Arrays.sort(arr);
	for(int i=n-1;i>=2;i--){
	int l=0;
	int r=i-1;
	while(l<r){
		if(arr[i]==arr[l]+arr[r]){
		System.out.println(" Triplet Exist at I="+i+",J="+l+",K="+r);break;
		}else if((arr[l]+arr[r])>arr[i])r--;
		else l++;
		}
	}
	System.out.println(Arrays.toString(arr));
}
public static void main(String arr[]){
int ar[] = {3, 1, 4, 6, 5}; 
	Triplet t=new Triplet();
	t.isTriplate(ar,ar.length);
	}
}
