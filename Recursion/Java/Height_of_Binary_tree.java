

class Node
{
    int key;
    Node left = null, right = null;
 
    Node(int key) {
        this.key = key;
    }
}
 
class Main
{
    // Recursive function to calculate height of given binary tree
   public static int findHeight(Node root) { 

            int lh,rh;

            if(root==null){
                return 0;
            }

            lh=findHeight(root.left);
            rh=findHeight(root.right);
            if(rh>lh){
                return 1+rh;
            }
            else{
                return 1+lh;
            }
   }
    public static void main(String[] args)
    {
        Node root = null;
 
        root = new Node(15);
        root.left = new Node(10);
        root.right = new Node(20);
        root.left.left = new Node(8);
        root.left.right = new Node(12);
        root.right.left = new Node(16);
        root.right.right = new Node(25);
 
        System.out.print("The height of the binary tree is " + findHeight(root));
    }
}