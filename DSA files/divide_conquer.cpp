#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;


// MERGE SORT
// void merge(int* arr , int s ,int e){
//     int mid  = (s+e)/2;

//     //length of left and right arrray
//     int len1=mid-s+1;
//     int len2  =e-mid;

//     //create array dynamically
//     int* left = new int[len1];
//     int* right = new int[len2];

//     //copy values to respective arrays
//     int k = s;
//     for(int i=0;i<len1;i++){
//         left[i]=arr[k];
//         k++;
//     }

//     k=mid+1;
//     for(int i=0;i<len2;i++){
//         right[i]=arr[k];
//         k++;
//     }

//     //merge
//     int leftIndex=0;
//     int rightIndex=0;
//     int mainArrayIndex=s;

//     while(leftIndex < len1 && rightIndex< len2){
//         if(left[leftIndex]<right[rightIndex]){
//             arr[mainArrayIndex++] = left[leftIndex++];
//         }
//         else{
//             arr[mainArrayIndex++] = right[rightIndex++];
//         }

//     }

//     //if there are still elements pending
//     while(leftIndex<len1){
//         arr[mainArrayIndex++] = left[leftIndex++];
//     }

//     while(rightIndex<len2){
//         arr[mainArrayIndex++] = right[rightIndex++];
//     }

//     //TODO :: delete left and right named array which are newly created dinamically
// }

// void mergeSort(int* arr, int s , int e){
//     //base case
//     //single element s==e
//     //invalid array s>e
//     if(s>=e){
//         return;
//     }
//     int mid = (s+e)/2;
    
//     // left 
//     mergeSort(arr,s,mid);

//     // right 
//     mergeSort(arr,mid+1,e);

//     merge(arr,s,e);  
// }

// int main(){
//     int arr[] = {1,8,4,12,17,10,99,89};
//     int n=8;
//     int s=0;
//     int e = n-1;

//     mergeSort(arr,s,e);

//     for(int i=0;i<n;i++){
//         cout <<arr[i] << " ";
//     }

//     cout << endl;
// }


//QUICK SORT
// int partition(int arr[],int s ,int e){
//     int pivotElement = arr[s];
//     int pivotIndex = s;

//     //find right position of pivot elenment
//     int count =0;
//     for(int i =s+1;i<=e;i++){
//         if(arr[i]<=pivotElement){
//             count++;
//         }
//     }
//     int rightIndex = s+count;
//     swap(arr[pivotIndex],arr[rightIndex]);
//     pivotIndex=rightIndex;

//     //small elements in left and big one's in right
//     int i=s;
//     int j=e;

//     while(i<pivotIndex && j>pivotIndex){
//         while(arr[i]<=pivotElement){
//             i++;
//         }
//         while(arr[j]>pivotElement){
//             j--;
//         }
//     }

//     //2 case are possible 
//     //A -> u found the element to swap (lager elemnet on left side and vice versa)
//     //B -> no need to swap
//      while(i<pivotIndex && j>pivotIndex){
//         swap(arr[i] , arr[j]);
//      }
//      return pivotIndex;
// }

// void quickSort(int arr[] , int s, int e){
//     //base case
//     if(s>=e){
//         return ;
//     }

//     // pivot index
//     int p = partition(arr,s,e);

//     //left 
//     quickSort(arr,s,p-1);

//     //right
//     quickSort(arr,p+1,e);

// }

// int main(){
//     int arr[] = {8,1,3,4,20,50,30};
//     int n =7;
//     int s=0;
//     int e = n-1;

//     quickSort(arr,s,e);

//     for(int i=s;i<=e;i++){
//         cout << arr[i] << " ";
//     }

// }


//BACKTRACING  --> Permutations of string
// void printPermutations( string& str,int i){
//     //base case 
//     if(i>=str.length()){
//         cout << str << " ";
//         return ;
//     }

//     //swapping
//     for(int j=i;j<str.length();j++){
//         swap(str[i],str[j]);

//         //RE call
//         printPermutations(str,i+1);

//         //BAcktracking : used coz we have passed the string here by refernce so to get the main string for 
           //next iteration we must swap the elements again(Inshort -: to recreate the original input)
//         swap(str[i],str[j]);
//     }

// }

// int main(){
//     string str = "abc";
//     int i=0;

//     printPermutations(str,i);

//     return 0;
// }


//RAT IN A MAZE
// bool isSafe(int maze[][3],  int x, int y,
//     int row , int col ,vector<vector <bool>>visited){
//         if(((x>=0 && x<row) && (y>=0 && y<col)) && (maze[x][y]==1) && (visited[x][y]==false)){
//             return true;
//         }
//         else{
//             return false;
//         }
// }


// void solveMaze(int maze[][3],int row ,int col ,int x,
//      int y,vector<vector <bool>>&visited,
//     vector<string>&path,string output){
//         //base case
//         if(x==row-1 && y==col-1){
//             //answer found
//             path.push_back(output);
//             return;
//         }

//         //Down -> i+1,j
//         if(isSafe(maze,x+1,y,row,col,visited)){
//             visited[x+1][y]=true;
//             solveMaze(maze,row,col,x+1,y,visited,path,output+'D');
//             //backtrack
//             visited[x+1][y]=false;
//         }

//         //left -> i,j-1
//         if(isSafe(maze,x,y-1,row,col,visited)){
//             visited[x][y-1]=true;
//             solveMaze(maze,row,col,x,y-1,visited,path,output+'L');
//             //backtrack
//             visited[x][y-1]=false;
//         }

//         //right -> i,j+1
//         if(isSafe(maze,x,y+1,row,col,visited)){
//             visited[x][y+1]=true;
//             solveMaze(maze,row,col,x,y+1,visited,path,output+'R');
//             //backtrack
//             visited[x][y+1]=false;
//         }

//         //up -> i-1,j
//         if(isSafe(maze,x-1,y,row,col,visited)){
//             visited[x-1][y]=true;
//             solveMaze(maze,row,col,x-1,y,visited,path,output+'U');
//             //backtrack
//             visited[x-1][y]=false;
//         }
//     }

// int main(){
//     int maze[3][3] = {{1,0,0} , 
//                     {1,1,0} , 
//                     {1,1,1}};
//     int row=3;
//     int col=3;

//     vector<vector <bool>>visited (row, vector<bool>(col,false));
//     string output = "";
//     vector<string>path;

//     if(maze[0][0]==0){
//         cout << "No path exists" << endl;
//     }

//     //mark src as true
//     visited[0][0]=true;

//     solveMaze(maze,row,col,0,0,visited,path,output);

//     cout << "Printing results:" <<endl; ;
//     for(auto i : path){
//         cout << i << " ";
//     }
//     cout <<endl;

//     if(maze[row-1][col-1]==0){
//         cout << "Path doesn't exists" << endl;
//     }
// }


//N-Queens
unordered_map<int,bool>rowCheck;
unordered_map<int,bool>upperLeftDiagonalCheck;
unordered_map<int,bool>bottomLeftDiagonalCheck;

void printSolution(vector<vector<char>>& board, int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

bool isSafe(int row,vector<vector<char>>& board,int n , int col){
    if(rowCheck[row]==true){
        return false;
    }
    if(upperLeftDiagonalCheck[n-1+col-row]==true){
        return false;
    }
    if(bottomLeftDiagonalCheck[col+row] == true){
        return false;
    }

    return true;

    // int i=row;
    // int j =col;

    // //check row
    // while(j>=0){
    //     if(board[i][j]=='Q'){
    //         return false;
    //     }
    //     j--;
    // }

    // //check upper left diaganol
    // i=row;
    // j =col;
    // while(j>=0 && i>=0){
    //     if(board[i][j]=='Q'){
    //         return false;
    //     }
    //     j--;
    //     i--;
    // }

    // //check bottom left diaganol
    // i=row;
    // j =col;
    // while(j>=0 && i<n){
    //     if(board[i][j]=='Q'){
    //         return false;
    //     }
    //     i++;
    //     j--;
    // }

    // return true;
}

void solve(vector<vector<char>> &board , int n ,int col){
    //base case
    if(col>=n){
        printSolution(board,n);
        return;
    }

    for(int row=0;row<n;row++){
        if(isSafe(row , board , n ,col)){
            board[row][col]='Q' ;  //1 means queen is placed
            rowCheck[row]=true;
            upperLeftDiagonalCheck[n-1+col-row]=true;
            bottomLeftDiagonalCheck[col+row] = true;
            //RE
            solve(board,n,col+1);

            //backtracking
            board[row][col]='-';
            rowCheck[row]=false;
            upperLeftDiagonalCheck[n-1+col-row]=false;
            bottomLeftDiagonalCheck[col+row] = false;
        }
    }
}

int main(){
    int n=4;
    vector<vector<char>> board(n,vector<char>(n,'-'));
    int col = 0;

    solve(board , n ,col);

    return 0;
}