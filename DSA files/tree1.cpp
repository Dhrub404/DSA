#include<iostream>
#include<queue>
using namespace std;

class node {
    public:
        int data;
        node* left;
        node* right;

    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node* buildTree(node* root){

    cout << "Enter the data:" << endl;
    int data;
    cin >> data;

    if(data == -1){
        return NULL;
    }
    
    root = new node(data);

    cout << "Enter data for inserting in left of " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for inserting in right of " << data << endl;
    root->right = buildTree(root->right);

    return root;

}

void levelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    //seperator :- to seperate levels
    q.push(NULL);

    while (!q.empty())
    {
        node* temp = q.front();
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


//INORDER traversal
void inOrder(node* root){
    //base case
    if(root == NULL){
        return;
    }

    inOrder(root->left);
    cout << root->data << " " ;
    inOrder(root->right);
}

//PREORDER traversal
void preOrder(node* root){
    //base case
    if(root == NULL){
        return;
    }

    cout << root->data << " " ;
    preOrder(root->left);
    preOrder(root->right);
}

//PREORDER traversal
void postOrder(node* root){
    //base case
    if(root == NULL){
        return;
    }

    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " " ;
}



//Build tree from level order traversal
void buildFromLevelOrder(node* &root){
    queue<node*> q;
    cout <<"Enter the data for root: " <<endl;
    int data;
    cin >> data;
    root = new node(data);
    q.push(root);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        cout << "Enter left node for: " << temp->data <<endl;
        int leftData;
        cin >> leftData;

        if(leftData != -1){
            temp->left = new node(leftData);
            q.push(temp->left);
        }

        cout << "Enter right node for: " << temp->data <<endl;
        int rightData;
        cin >> rightData;

        if(rightData != -1){
            temp->right = new node(rightData);
            q.push(temp->right);
        }

    }
}


int main(){

    node*root = NULL;

    //creating a tree
    //input for tree :- 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    // root = buildTree(root);

    // //Level Order Traversal
    // cout  << "Printing the level order traversal:" << endl;
    // levelOrderTraversal(root);

    // //Inorder traversal
    // cout << "Inorder Traversal: " <<endl;
    // inOrder(root);
    // cout << endl;

    // //preorder traversal
    // cout << "Preorder Traversal: " <<endl;
    // preOrder(root);
    // cout << endl;

    // //postorder traversal
    // cout << "Postorder Traversal: " <<endl;
    // postOrder(root);
    // cout << endl;

    // Build tree from level order traversal
    //input for tree build from level order traversal :- 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1 
    buildFromLevelOrder(root);
    levelOrderTraversal(root);

    return 0;
}