#include <iostream>
#include <vector>
using namespace std;

void SelectionSort(vector<int>&arr){
    int n=arr.size();
    for(int i=0;i<n-1;i++){
        int minidx=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minidx]){
                minidx=j;
            }

        }
        swap(arr[i],arr[minidx]);

    }

}

void PrintArray(vector<int>arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<< " ";

    }
    cout<<endl;


}

int main(){
    vector<int>arr;
    int n;
    cout<<"enter number of elements required : ";
    cin>>n;
    cout<<"enter elements: ";
    for(int i=0;i<n;i++){
        cout<<"enter elements: "<<i<<" ";
        int x;
        cin>>x;
        arr.push_back(x);
    }
    SelectionSort(arr);
    PrintArray(arr);
    return 0;
}

