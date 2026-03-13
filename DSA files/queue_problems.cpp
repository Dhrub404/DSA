#include <iostream>
#include <queue>
using namespace std;

class kQueue{
    public:
    int n , k , freeSpot;
    int *arr , *front , *next , *rear;

    kQueue(int _n , int _k):n(_n), k(_k), freeSpot(0){
        arr = new int[n];
        front = new int[k];
        next = new int[n];
        rear = new int[k];

        for(int i=0;i<k;i++){
            front[i] = rear[i] = -1;
        }

        for(int i=0;i<n;i++){
            next[i] = i+1;
        }
        next[n-1] = -1;
    }

    //push x element to qith queue
    bool push(int x, int qi){
        //check overFlow
        if(freeSpot == -1){
            return false;
        }

        //find first free index
        int index = freeSpot;

        //update freeSpot
        freeSpot = next[index];
    
        //if it is first element of qith
        if(front[qi] == -1){
            front[qi] = index;
        }
        else{
            //else .. if qith already have element then link new element to the q's rearest element
            next[rear[qi]] = index;
        }

        //update next 
        next[index] = -1;

        //update rear
        rear[qi] = index;
        arr[index] = x;

        return true;
    }


    // pop element from qith queue
    int pop(int qi){
        //underflow check
        if(front[qi] == -1){
            return -1;
        }

        //find index to pop
        int index = front[qi];

        // front ko update kro
        front[qi] = next[index];

        // (OPTIONAL)if there is only single element and the queue is empty , therefore rear should also be -1
        if(front[qi] == -1){
        rear[qi] = -1;
        }

        //updates freeSpot
        next[index] = freeSpot;
        freeSpot = index;
        
        return arr[index];
    }

    ~kQueue(){
        delete[] arr;
        delete[] front;
        delete[] rear;
        delete[] next;      
    }
};

int main(){
    kQueue kq(8,3);

    cout << kq.push(1,0) << endl;
    cout << kq.push(2,0) << endl;
    cout << kq.push(5,1) << endl;
    cout << kq.push(3,0) << endl;

    cout << kq.pop(1) << endl;
    cout << kq.pop(0) << endl;
}