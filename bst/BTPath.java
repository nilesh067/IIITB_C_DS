class Node{
	int data;
	Node lc,rc;
	Node(int val){
	data=val;
	lc=rc=null;
	}
}
class BTPath{
	Node root;
	ArrayList<Integer> path=new ArrayList<>();
	public static void main(String arr[]){
	BTPath btree=new BTPath();
	btree.root=new Node(10);
	btree.root.lc=new Node(20);
	btree.root.rc=new Node(30);
	btree.root.lc.lc=new Node(15);
	btree.root.lc.rc=new Node(25);
	btree.root.rc.lc=new Node(25);
	btree.root.rc.rc=new Node(35);
	traverse(root);
	}

	
	public static void traverse(Node root){
		if(root!=null){
		traverse(root.lc);
		System.out.println(root.data);
		traverse(root.rc);
		}
	}
	public static boolean findPath(ArrayList<Integer> path,int data,Node root){
		if(root==null)return false;
		path.add(root.data);
		if(root.data==data)return true;
		if(root.lc!=null){
		return findPath(path,data,root.lc);
		}
		if(root.rc!=null){
		return findPath(path,data,root.rc);
		}
		path.remove(path.size()-1);
		return false;
	
	}

}
