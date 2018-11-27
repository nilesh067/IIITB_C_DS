import java.util.Stack;
class MinStack2{

Stack<Integer> min=new Stack<>();
int minimum;
void push(int x){
	if(min.isEmpty()==true){
		min.push(x);
		minimum=x;
	}
	else{
		if(x<minimum){
		min.push(2*x-minimum);
		minimum=x;
		}else{
		min.push(x);
		}
	}

}
public int pop(){
	if(min.isEmpty()==true){
	System.out.println("Empty Stack");
	return 0;
	}
	int x=min.pop();
	int y;
	if(x<minimum)
	{	
		y=minimum;
		minimum=2*minimum-x;
	}else{
		y=x;
	}
	System.out.println("Poped Element :: "+y);
	return y;
}
int min(){
	return minimum;
}
public static void main(String arr[]){
	MinStack2 s=new MinStack2();
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
