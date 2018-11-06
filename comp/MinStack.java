import java.util.Stack;
class MinStack extends Stack<Integer>{

Stack<Integer> min=new Stack<>();
void push(int x){
	if(isEmpty()==true){
		super.push(x);
		min.push(x);
	}
	else{
		super.push(x);
		int y=min.pop();
		min.push(y);
		if(y<x){
		min.push(y);
		}else{
		min.push(x);
		}
	}

}
public Integer pop(){
	int x=super.pop();
	min.pop();
	return x;
}
int min(){
	int x=min.pop();
	min.push(x);
	return x;
}
public static void main(String arr[]){
	MinStack s=new MinStack();
	s.push(10);
	System.out.println("Min ::  "+s.min());
	s.push(15);
	System.out.println("Min ::  "+s.min());
	s.push(5);
	System.out.println("Min ::  "+s.min()); 
	System.out.println("Pop :: "+s.pop());
	System.out.println("Min ::  "+s.min());
}
}
