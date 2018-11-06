class primeSum{
	public static void main(String ar[]){
	java.util.Scanner sc=new java.util.Scanner(System.in);
	int t=Integer.parseInt(sc.nextLine());
	for(int i=0;i<t;i++){
		int num=Integer.parseInt(sc.nextLine());
		boolean flag=false;
		if(num>=8){
		for(int j=4;j<=(num-j);j++){
			if(isPrimeProduct(j)&&isPrimeProduct(num-j)){
				flag=true;
				break;
			}
		}
		if(flag){System.out.println("YES");}
		else{System.out.println("NO");}
		}else{System.out.println("NO");}
	}
	}
	static boolean isPrimeProduct(int num){
		for(int i=2;i<=num/2;i=nextPrime(i)){
			for(int j=nextPrime(i);i*j<=num;j=nextPrime(j)){
			if(i*j==num){
				return true;}
			}
		}
		return false;
	}
	static int nextPrime(int i){
		do{
		i++;
		}while(!isPrime(i));
		return i;
	}
	static boolean isPrime(int i){
		for(int j=2;j<=i/2;j++){
			if(i%j==0)return false;
		}
		return true;
	}
}
