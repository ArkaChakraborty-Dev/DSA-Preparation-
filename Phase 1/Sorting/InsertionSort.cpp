#include <iostream>
#include <vector>
using namespace std;

void InsertionSort (vector<int>&arr){
    for (int i=1;i<arr.size();i++){
        int key = arr[i];
        int j = i - 1 ;
        while (j>=0 && arr[j]>key){
            arr [j+1] = arr [j];
            j--;
        }

        arr[j+1]=key;
    }
}

void PrintArray (vector<int>arr){
    for(int i = 0 ; i<arr.size() ;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main (){
    int n;
    vector<int>arr;
    cout<<"Enter number of elements required : ";
    cin >> n;
    cout << "Enter elements : ";
    for (int i=0 ; i<n ; i++){
        cout << "Enter Element for index "<<i<<" :";
        int x ;
        cin >> x;
        arr.push_back(x);
    }
    InsertionSort(arr);
    PrintArray (arr);

    return 0;
}
