#include <iostream>
#include <vector>
using namespace std;

int Partition (vector<int>&arr, int low , int high){
    int pivot = arr[high];
    int i = low - 1;

    
    for ( int j = low;j<high;j++){
        if (arr[j]<=pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    
    swap (arr[i+1],arr[high]);

    return i+1;
}
void QuickSort (vector<int>&arr, int low,int high){
    if (low<high){
        
        int pivotindx = Partition(arr , low , high);

        QuickSort(arr,low,pivotindx-1);
        QuickSort(arr,pivotindx+1,high);
        
    }

}
void PrintArray (vector<int>arr){
    for (int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<" Enter number of elements required : ";
    cin>>n;
    std:: vector<int>arr;
    for (int i=0;i<n;i++){
        cout<<"Enter elements "<<i<<": ";
        int x;
        cin>>x;
        arr.push_back(x);

    }
    QuickSort(arr, 0, n - 1);
    PrintArray(arr);

    return 0;
}