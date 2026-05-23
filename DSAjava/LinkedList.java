public class LinkedList{
    public static void main(String[] args) {
        LinkList  l = new LinkList();
        l.append(10);
        System.out.println(l.root.data);
        l.append(11);
        System.out.println(l.root.add.data);
        l.append(12);
        l.append(13);
        // System.out.println(l.root.add.add.data);
        // System.out.println(l.root.add.add.data);
    }
}

class LinkList{
    Node root;
    public void append(int data){
        Node t = new Node(data);
        Node x ;//= new Node();
         x = this.root;
        if(root==null){
            root = t;
            return;
        }
        while(x.add!=null){
            x = x.add;
        }
        x.add=t;
        
    }
}
class Node{
    int data;
    Node add;
    public Node(int data){
        this.data = data;
        this.add = null;
    }
}