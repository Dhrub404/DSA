#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }

};

void levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    //seperator :- to seperate levels
    q.push(NULL);

    while (!q.empty())
    {
        Node* temp = q.front();
        q.pop();

        if(temp == NULL){       //if temp == NULL it means old level is completed and now mmove to print next level
            cout << endl;
            if(!q.empty()){     //queue still have some child nodes
                q.push(NULL);
            }
        }
        else{
            cout << temp->data << " ";
            if(temp->left !=NULL){
                q.push(temp->left);
            }
            if(temp->right !=NULL){
                q.push(temp->right);
            }
        } 
    }
}


//INORDER traversal  -->LNR
void inOrder(Node* root){
    //base case
    if(root == NULL){
        return;
    }

    inOrder(root->left);
    cout << root->data << " " ;
    inOrder(root->right);
}

//PREORDER traversal  --> NLR
void preOrder(Node* root){
    //base case
    if(root == NULL){
        return;
    }

    cout << root->data << " " ;
    preOrder(root->left);
    preOrder(root->right);
}

//PREORDER traversal  --> LRN
void postOrder(Node* root){
    //base case
    if(root == NULL){
        return;
    }

    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " " ;
}


Node* insertIntoBST(Node* root , int data){
    if(root == NULL){
        //this is the first node we are creating
        root = new Node(data);
        return root;
    }

    //not the first node
    if(root->data > data){
        //insert in left
        root->left = insertIntoBST(root->left,data);
    }
    else{
        //insert in right
        root->right = insertIntoBST(root->right,data);
    }
    return root;
    
}

void takeInput(Node* &root){
    int data;
    cin >> data;

    while(data != -1){
        root = insertIntoBST(root,data);
        cin >> data;
    }
}

Node* findNodeInBST(Node* root , int target){
    //base case
    if(root == NULL){
        return NULL;
    }

    if(root->data == target){
        return root;
    }
    if(target > root->data){
        //search in right subtree
        return findNodeInBST(root->right,target);
    }
    else{
        //search in left subtree
        return findNodeInBST(root->left,target);
    }

}

int minVal(Node* root){
    Node* temp = root;
    if(temp == NULL){
        return -1;
    }

    while(temp->left != NULL){
        temp = temp->left;
    }

    return temp->data;
}

int maxVal(Node* root){
    Node* temp = root;
    if(temp == NULL){
        return -1;
    }

    while(temp->right != NULL){
        temp = temp->right;
    }

    return temp->data;
}


//INORDER PREDECCESSOR 
// 2 things included :: 1st if left subtree is available ,,, 2nd if its not available then we use curr to get the closest pred
int inorderPredecessor(Node* root , int key){
    Node* curr = root;
    Node* pred = NULL;
    if(curr == NULL){
        return -1;
    }

    while(curr != NULL){
        if(key > curr->data){
            pred = curr;
            curr = curr->right;
        }
        else if(key < curr->data){
            curr = curr->left;
        }
        else{
            if(curr->left != NULL){
                return maxVal(curr->left);
            }
            break;
        }
    }
    if(pred == NULL){
        return -1;
    }
    return pred->data;
}

//INORDER SUCCESSOR 
int inorderSuccessor(Node* root , int key ){
    Node* curr = root;
    Node* succ = NULL;
    if(curr == NULL){
        return -1;
    }

    while(curr != NULL){
        if(key < curr->data){
            succ = curr;
            curr = curr->left;
        }
        else if(key > curr->data){
            curr = curr->right;
        }
        else{
            if(curr->right != NULL){
                return minVal(curr->right);
            }
            break;
        }
    }
    if(succ == NULL){
        return -1;
    }
    return succ->data;
}


//Deletion in BST
Node* deleteNodeInBST(Node* root , int target){
    //base case 
    if(root == NULL){
        return NULL;
    }

    // step 1 --> find target node
    if(root->data == target){

        //step 2 --> delete this node ... to delete node we have 4 possible cases

        //case 1 both leaf nodes are null
        if(root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        }
        //case 2 right leaf node is null and the left is non null
        else if(root->left != NULL && root->right == NULL){
            Node* child = root->left;
            delete root;
            return child;
        }
        //case 3 left leaf node is null and the right is non null
        else if(root->left == NULL && root->right != NULL){
            Node* child = root->right;
            delete root;
            return child;
        }
        // case 4 : both are non nulll : we return inorder predecessor here i.e. left sub tree ki max. value
        else{
            int inorderPre = inorderPredecessor(root ,target);
            root->data = inorderPre;
            root->left = deleteNodeInBST(root->left , inorderPre);
            return root;
        }
    }
    if(target > root->data){
        //search in right subtree
        root->right = deleteNodeInBST(root->right,target);
    }
    else{
        //search in left subtree
        root->left = deleteNodeInBST(root->left,target);
    }

    return root;
}

int main(){
    Node* root = NULL;
    cout <<"Enter the data for Node: " << endl;
    takeInput(root);
    cout << endl;

    cout << "Printing BST: " << endl;
    levelOrderTraversal(root);
    cout << endl;

    // cout << "Inorder Traversal: " << endl;
    // inOrder(root);
    // cout << endl;

    // cout << "Preorder Traversal: " << endl;
    // preOrder(root);
    // cout << endl;

    // cout << "Postorder Traversal: " << endl;
    // postOrder(root);
    // cout << endl;

    //searching
    // int target = 17;
    // if(findNodeInBST(root,target)){
    //     cout << "Node found" << endl;
    // }else{
    //     cout << "Node not found" << endl;
    // }

    // //Minimum value in BST
    // cout << endl;
    // cout << "Minimum value in BST: " << " " << minVal(root);

    // //Maximum value in BST
    // cout << endl;
    // cout << "Maximum value in BST: " << " " << maxVal(root);

    // //INorder Predeccessor
    // cout << endl;
    // int key  = 20;
    // cout << "Inorder Predecessor of " << key << " is " <<  inorderPredecessor(root , key);

    // //INorder Sucessor
    // cout << endl;
    // // int key  = 20;
    // cout << "Inorder Successor of " << key << " is " <<  inorderSuccessor(root , key) << endl;

    //Delete a Node in BST
    cout << endl;
    int target = 100;
    cout << "Delete the node " << target << " from BST " << endl; 
    root = deleteNodeInBST(root,target);

    cout << "Printing BST: " << endl;
    levelOrderTraversal(root);
    cout << endl;

    

    return 0;
}