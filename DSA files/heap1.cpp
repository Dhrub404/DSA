#include<iostream>
using namespace std;

class Heap{
    public:
    int arr[101];
    int size ;

    Heap(){
        size = 0;
    }
    void insert(int value){
        // step - A :- add element to the end of array
        size = size + 1;   
        int index = size;

        arr[index] = value;

        while(index > 1){
            int parentIndex = index/2;
            // take the element to its right position to maintain the heap property
            if(arr[index] > arr[parentIndex]){
                swap(arr[index] , arr[parentIndex]);
                index = parentIndex;
            }
            else{
                break;
            } 
        }
    }

    int delete_element(){   // directly deletes top element as it is an array
        // replace root element with last element
        int ans = arr[1];
        arr[1] = arr[size];
        size--;

        //place the new root ka data on its right position
        int index = 1;

        while(index < size){
            int left = 2*index;
            int right = 2*index + 1;

            int largest = index;
            // get index of largest element
            if(left < size && arr[left] > arr[largest]){
                largest = left;
            }
            if(right < size && arr[right] > arr[largest]){
                largest = right;
            } 

            // take the element to its right position to maintain the heap property
            if(largest == index){
                //means element is at correct position
                break;
            }
            else{
                swap(arr[index] , arr[largest]);
                index = largest;
            }
        }
        return ans;   
    }
};


//HEAPIFY
void heapify(int a[] , int size  , int i){
    int index = i;
    int left = 2*i;
    int right = 2*i + 1;

    int largest = index;
    // get index of largest element
    if(left <= size && a[left] > a[largest]){
        largest = left;
    }
    if(right <= size && a[right] > a[largest]){
        largest = right;
    } 

    // take the element to its right position to maintain the heap property
    if(largest != index){
       //means element is at wrong position swap it and recurcively call heapiify again;
        swap(a[i] , a[largest]);
        index = largest;
        heapify(a , size , index);
    }
}

void buildHeap(int a[] , int n){
    for(int i=n/2;i>0;i--){
        heapify(a, n, i);
    }
}

void heapSort(int a[] , int n){

    while(n != 1){
        //step 1 swap first element with last element
        swap(a[1] , a[n]);
        n--;

        //step 2 heapify
        heapify(a, n, 1);
    }

}


int main(){
    Heap h;
    h.arr[0] = -1;
    // h.arr[1] = 100;
    // h.arr[2] = 50;
    // h.arr[3] = 60;
    // h.arr[4] = 30;
    // h.arr[5] = 40;
    // h.arr[6] = 45;
    // h.arr[7] = 55;
    // h.arr[8] = 10;
    // h.arr[9] = 20;
    // h.size = 9;

    //creating heap
    h.insert(50);
    h.insert(30);
    h.insert(70);
    h.insert(40);
    h.insert(80);
    h.insert(100);


    // cout << "Printing the Heap" << endl;
    // for(int i=0;i<=h.size;i++){
    //     cout << h.arr[i] << " ";
    // }
    // cout << endl;
    // //insertion
    // h.insert(110);
    // cout << "Printing the Heap" << endl;
    // for(int i=0;i<=h.size;i++){
    //     cout << h.arr[i] << " ";
    // }
    cout << endl;

    //DELETEION
    // h.delete_element();
    // cout << "Printing the Heap after Deletion " << endl;
    // for(int i=0;i<=h.size;i++){
    //     cout << h.arr[i] << " ";
    // }

    //HEAPIFY
    // int a[] = {-1,12,50,60,30,40,52};
    // int n = 6;
    // heapify(a,n,1);

    // cout << "Printing the Heap" << endl;
    // for(int i=0;i<=n;i++){
    //     cout << a[i] << " ";
    // }

    // BUILD HEAP
    // int a[] = {-1,12,14,13,17,15};
    // int n = 5;

    // buildHeap(a , n);
    // cout << "Printing the Heap" << endl;
    // for(int i=0;i<=n;i++){
    //     cout << a[i] << " ";
    // }


    // HEAP SORT
    int a[] = {-1,100,50,60,20,30};
    int n = 5;

    heapSort(a , n);
    cout << "Printing the Heap Sort" << endl;
    for(int i=0;i<=n;i++){
        cout << a[i] << " ";
    }

}