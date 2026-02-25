#include<iostream>
#include<queue>
#include<deque>
#include<stack>
using namespace std;

//reverse queue
void reverseQueue(queue<int> &q){
    //base case
    if(q.empty()){
        return;
    }

    stack<int> s;
    while(!q.empty()){
        int temp = q.front();
        q.pop();

        s.push(temp);
    }

    while(!s.empty()){
        int temp = s.top();
        s.pop();

        q.push(temp);
    }
}

//reverse queue by recursion
void reverseQueueRecursion(queue<int> &q){
    //base
    if(q.empty())   return;

    int temp = q.front();
    q.pop();
    reverseQueueRecursion(q);

    q.push(temp);
}

//reverse first K elements of queue 
void reverseKElements(queue<int> &q , int k){
    //base case

    //step A: push k elements from queue to stack
    stack<int> s;

    int count = 0;
    int n = q.size();

    //handle case for k=0 and k>n and negative k
    if(k<=0 || k>n){
        return;
    }

    while(!q.empty()){
        int temp = q.front();
        q.pop();
        s.push(temp);
        count++;
        if(count == k){
            break;
        }
    }

    //step B : push stack to queue
    while(!s.empty()){

        int temp = s.top();
        s.pop();
        q.push(temp);
    }

    //step C : push k-n element from front to the end
    count = 0;
    while(!q.empty() && n-k != 0){
        int temp = q.front();
        q.pop();
        q.push(temp);
        count++;

        if(count == n-k){
            break;
        }
    }  
}


//INTERLEAVE 1st and 2nd half of queue
void interLeaveQueue(queue<int>& q){
    //Step A: seprate queue in two halves
    int size = q.size();
    if(q.empty())
        return;

    queue<int> q2;
    int count = 0;
    while(!q.empty()){
        int temp = q.front();
        q.pop();

        q2.push(temp);
        count++;

        if (count == size/2)
            break;  
    }

    //Step B : start Interleaving
    while(!q.empty() && !q2.empty()){
        int first = q2.front();
        q2.pop();

        q.push(first);

        int second = q.front();
        q.pop();

        q.push(second);
    }

    // to pop first element from front & push it to last (for odd case)
    if(size&1){     //here we can use size&1 to find if size is odd or not ,,, we can also use (size%2 !=0) both are same
        int temp = q.front();
        q.pop();
        q.push(temp);
    }
}


//SLIDING WINDOW PROBLEM --> First negative integer in every window of size K
void solve(int arr[] , int n , int k){
    deque<int> q;

    //process first window of size K
    for(int i=0;i<k;i++){
        if(arr[i] < 0){
            q.push_back(i);
        }
    }

    //process remaing window
    for(int i=k;i<n;i++){
        //print answer of the last window
        if(q.empty()){
            cout << 0 << " ";
        }
        else{
            cout << arr[q.front()] << " ";
        }

        //Removal of out of window element's index
        while((!q.empty()) && (i-q.front() >= k)){
            q.pop_front();
        }

        //Insertion of next element index
        if(arr[i] < 0){
            q.push_back(i);
        }    
    }

    //PRINT ANSWER FOR LAST WINDOW (as in our for loop the answer is printed for the next window and then other operations are done ... so coz of this last window answer isn't printed)
    if(q.empty()){
        cout << 0 << " ";
    }
    else{
        cout << arr[q.front()] << " ";
    }

}


int main(){
    queue<int> q;

    // q.push(5);
    // q.push(15);
    // q.push(25);
    // q.push(35);
    // q.push(45);
    // q.push(55);

//    //reverse queue
    // reverseQueue(q);
    // reverseQueueRecursion(q);
    // while(!q.empty()){
    //     cout << q.front() <<" ";
    //     q.pop();
    // }
    // cout << endl;


    //reverse first k elements of  queue
    // int k=3;
    // reverseKElements(q,k);
    // while(!q.empty()){
    //     cout << q.front() <<" ";
    //     q.pop();
    // }
    // cout << endl;

    //INTERLEAVE 1st and 2nd half of queue
    // interLeaveQueue(q);
    // while(!q.empty()){
    //     cout << q.front() <<" ";
    //     q.pop();
    // }


    //SLIDING WINDOW PROBLEM --> First negative integer in every window of size K
    int arr[] = {12,-1,-7,8,-15,30,16,28};
    int size = 8;
    
    int k=3;

    solve(arr,size,k);


    return 0;
}