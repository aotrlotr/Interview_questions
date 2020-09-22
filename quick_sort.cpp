#include<iostream>
using namespace std;
int partition(int arr[],int p ,int r){
    int x = arr[r];
    cout<<x<<" ";
            int i = p - 1;

            for (int j=p; j<r; j++){
                if(arr[j] <= x){
                    i = i + 1;

                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
            int temp1 = arr[i+1];
            arr[i+1] = arr[r];
            arr[r] = temp1;

            return (i+1);
        }

void quick_sort(int arr[] , int p , int r){
    int pivot;
    if(p<r){
        int q=partition(arr,p,r);
        quick_sort(arr,p,q-1);
        quick_sort(arr,q+1,r);
    }
    
}

int main(){
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   quick_sort(arr,0,n-1);

}