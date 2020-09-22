#include<iostream>
using namespace std;

void heapify(int arr[] , int n , int i){
    int start = i;
    int left = 2*i + 1;
    int right = 2*i + 2 ;

    if (left < n && arr[left] > arr[start]) 
        start = left; 
  
     
    if (right < n && arr[right] > arr[start]) 
        start = right; 
  
    
    if (start != i) { 
        swap(arr[i], arr[start]); 
  
        
        heapify(arr, n, start); 
    }
}


void buildHeap(int arr[] , int n){
    int starting = (n/2)-1;
    for (int i = starting ; i>=0; i--){
        heapify(arr,n,i);
    }
}


int main(){
    int n;
    cin>>n;
    if(n==0){
        cout<<"-1";
        return 0;
    }
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    buildHeap(arr,n);

    
        for(int i=0;i<n;i++){
        if (arr[i] < 0){
            cout<<"-1";
            return 0;
        }
    
    }
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    

    
         
    
}