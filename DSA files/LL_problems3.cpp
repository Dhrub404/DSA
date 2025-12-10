#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
 
};

//printing LL
void print(Node* &head){
    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
}



//find Length
int findLength(Node* head){
    Node* temp = head ;
    int length = 0;

    while(temp != NULL){
        length++;
        temp = temp->next;

    }
    return length;
    
}


//reverse LL
Node* reverse(Node* &head){
    Node* prev = NULL;
    Node* curr = head;  

    Node* forward = curr->next;

    while(curr != NULL){
        forward = curr->next;
        curr->next = prev;
        prev= curr ;
        curr=forward;
    }
    return prev;
}



//Check LL is Palindrome or not
bool checkPalindrome(Node* head){
    //empty LL
    if(head == NULL){
        cout << "LL is empty ";
        return true;
    }

    //single node
    if(head->next == NULL){
        return true;
    }

    // more than 1 node
    // step A --> find middle node
    Node* slow = head;
    Node* fast = head->next;

    while(fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
            slow = slow->next;
        }
    }
    //slow pointer is pointing to the middle node

    //step B--> reverse LL after the middle node
    Node* reverseLLHead = reverse(slow->next);

    //step C--> compare both halves of LL 
    Node* temp1 = head;
    Node* temp2 = reverseLLHead;

    while(temp2 != NULL){
        if(temp1->data != temp2->data){
            //not a palindrome 
            return false;
        }
        else{
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        
    }
    return true;

}



//Remove Duplicates from a sorted LL
void removeDuplicate(Node* head){
    //empty
    if(head == NULL){
        cout << "LL is empty" << endl;
        return;
    }

    //single node
    if(head->next == NULL){
        cout << "Single Node in LL " << endl;
        return;
    }

    //more than 1 node
    Node* curr = head;

    while(curr != NULL){
        if((curr->next != NULL) && curr->data == curr->next->data){
             Node* temp = curr->next;
            curr->next = curr->next->next;
            
            //delete node
            temp->next = NULL;
            delete temp;
        }
        else{
            curr = curr->next;
        }
    }
}



//SORT 0's , 1's , 2's     
//using counting and data replacement #1 approach
// void sortZeroOneTwo(Node* &head){
//     int zero = 0;
//     int one = 0;
//     int two = 0;

//     //step 1 --> counting  0's , 1's , 2's  
//     Node* temp = head;
//     while(temp != NULL){
//         if(temp->data == 0){
//             zero++;   
//         }
//         else if(temp->data == 1){
//             one++;   
//         }
//         else if(temp->data == 2){
//             two++;  
//         }
//         temp = temp->next;
//     }

//     //step 2 --> fill in order 
//     temp = head;

//     //fill zero
//     while(zero != 0){
//         temp->data = 0;
//         temp = temp->next;
//         zero--;
//     }

//     //fill one
//     while(one--){
//         temp->data = 1;
//         temp = temp->next;
//     }

//     //fill two
//     while(two != 0){
//         temp->data = 2;
//         temp = temp->next;
//         two--;
//     }
    
// }


//#2 approach --> Sort using nodes (no data replacement) 
Node* sort2(Node* &head){

    //empty LL
    if(head == NULL){
        cout << "LL is empty " << endl;
        return NULL;
    }
    
    //single node
    if(head->next == NULL){
        return head;
    }

    //create dummy nodes
    Node* zeroHead = new Node(-1);
    Node* zeroTail = zeroHead;

    Node* oneHead = new Node(-1);
    Node* oneTail = oneHead;

    Node* twoHead = new Node(-1);
    Node* twoTail = twoHead;

    //traverse original LL
    Node* curr  = head;
    while(curr != NULL){
        if(curr->data == 0){
            //remove the node containing ZERO from original LL
            Node* temp = curr;
            curr = curr->next;
            temp->next = NULL;

            //append the node containing ZERO to zeroHead LL
            zeroTail->next = temp;
            zeroTail = temp; 
        }
        else if(curr->data == 1){
            //remove the node containing ONE from original LL
            Node* temp = curr;
            curr = curr->next;
            temp->next = NULL;

            //append the node containing ONE to oneHead LL
            oneTail->next = temp;
            oneTail = temp;
        }
        else if(curr->data == 2){
            //remove the node containing TWO from original LL
            Node* temp = curr;
            curr = curr->next;
            temp->next = NULL;

            //append the node containing TWO to twoHead LL
            twoTail->next = temp;
            twoTail = temp;
        }
    }
    
    //all the LL oneHead , oneHead , twoHead are ready

    // Remove dummy nodes
    Node* temp = oneHead;
    oneHead = oneHead->next;
    temp->next = NULL;
    delete temp;

    temp = twoHead;
    twoHead = twoHead->next;
    temp->next = NULL;
    delete temp;

    //Join them
    //if there is no ZERO'S
    if(oneHead != NULL){
        zeroTail->next = oneHead;
        if(twoHead != NULL){
            oneTail->next = twoHead;
        }
    }
    else{
        if(twoHead != NULL){
            zeroTail->next = twoHead;
        }
    }

    //now delete dummy node of ZeroHead LL
    temp = zeroHead;
    zeroHead = zeroHead->next;
    temp->next = NULL;
    delete temp;

    // return head of the modified LL
    return zeroHead;

}



//Add 2 numbers reprented by LL
Node* add(Node* &head1, Node* &head2){

    if(head1 == NULL)
        return head2;

    if(head2 == NULL)
        return head1;

    // step 1 --> Reverse both the LL
    head1 = reverse(head1);
    head2 = reverse(head2);

    // step 2 --> add the LL's
    Node* ansHead = NULL;
    Node* ansTail = NULL;
    int carry = 0;

    while(head1 != NULL && head2 != NULL){
        int sum = carry + head1->data + head2->data;
        int digit = sum%10;
        carry = sum/10;

        //create a new node for the digit we get from modulus
        Node* newNode = new Node(digit);

        //attach the newNode in the answer LL
        if(ansHead == NULL){
            ansHead = newNode;
            ansTail = newNode;
        }
        else{
            ansTail->next = newNode;
            ansTail = newNode;
        }
        head1 = head1->next;
        head2 = head2->next;
        
    }

    //if head1 LL's length is greater than head2 LL
    while(head1 != NULL){
        int sum = carry + head1->data;
        int digit = sum%10;
        carry = sum/10;

        //create a new node for the digit we get from modulus
        Node* newNode = new Node(digit);
        ansTail->next = newNode;
        ansTail = newNode;

        head1 = head1->next;

    }

    //if head2 LL's length is greater than head1 LL
    while(head2 != NULL){
        int sum = carry + head2->data;
        int digit = sum%10;
        carry = sum/10;

        //create a new node for the digit we get from modulus
        Node* newNode = new Node(digit);
        ansTail->next = newNode;
        ansTail = newNode;

        head2 = head2->next;

    }

    //Handle carry --> what if carry is still there
    while(carry != 0){
        int sum = carry;
        int digit = sum%10;
        carry = sum/10;

        Node* newNode = new Node(digit);
        ansTail->next = newNode;
        ansTail = newNode;

    }

    // step3 --> Reverse the answered LL
    ansHead = reverse(ansHead);

    return ansHead;
}





int main(){
    // Node* head = new Node(10);
    // Node* second = new Node(20);
    // Node* third = new Node(20);
    // Node* fourth = new Node(30);
    // Node* fifth = new Node(40);
    // Node* sixth = new Node(40);

    // head->next = second;
    // second->next = third;
    // third->next = fourth;
    // fourth->next = fifth;
    // fifth->next = sixth;

    cout << endl;
    // print(head);




    //palindrome
    // bool isPalindrome = checkPalindrome(head);

    // if(isPalindrome){
    //     cout << "LL is palindrome" << endl;
    // }
    // else{
    //     cout << "LL is not Palindrome" << endl;
    // }




    //Remove duplicate from LL
    // removeDuplicate(head);
    // print(head);




    //SORT 0's , 1's , 2's
    // Node* head = new Node(2);
    // Node* second = new Node(1);
    // Node* third = new Node(1);
    // Node* fourth = new Node(0);
    // Node* fifth = new Node(0);
    // Node* sixth = new Node(2);
    // Node* seventh = new Node(1);

    // head->next = second;
    // second->next = third;
    // third->next = fourth;
    // fourth->next = fifth;
    // fifth->next = sixth;
    // sixth->next = seventh;

    // # approach 1
    // sortZeroOneTwo(head);
    // print(head);
    // cout << endl;

    // # approach 2
    // head = sort2(head);
    // cout << "Printing Sorted LL:" << endl;
    // print(head);
    // cout << endl;

    //checking if the head is NULL
    // Node* temp = NULL;
    // head = sort2(temp);
    // print(temp);
    // cout << endl;




    //ADD 2 NUMBERS reprented By LL
    Node* head1 = new Node(2);
    Node* second1 = new Node(4);
    head1->next = second1;

    Node* head2 = new Node(2);
    Node* second2 = new Node(3);
    Node* third2 = new Node(4);
    head2->next = second2;
    second2->next = third2;

    Node* ans = add(head1,head2);
    print(ans);

    return 0;

}