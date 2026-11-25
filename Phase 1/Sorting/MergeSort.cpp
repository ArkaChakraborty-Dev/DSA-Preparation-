#include <iostream>
#include <vector>
using namespace std;

void merge (vector <int>&arr , int left , int mid , int right) {
    vector <int> temp;
    int i = left;
    int j = mid+1;

    while (i<=mid && j<=right ){
        if(arr[i]<arr[j]){
            temp.push_back(arr[i]);
            i++;
        }else{
            temp.push_back(arr[j]);
            j++;
        }
    }

    while (i<=mid){
        temp.push_back(arr[i]);
        i++;
    }

    while (j<=right){
        temp.push_back(arr[j]);
        j++;
    }

    for ( int k =0 ; k<temp.size();k++){
        arr[left+k]=temp[k];

    }

}

void mergesort (vector <int>&arr, int left , int right){
    if (left >= right){
        return;
    
    }
    int  mid = left + (right-left)/2;
    mergesort (arr,left,mid);
    mergesort (arr,mid+1,right);
    merge (arr , left , mid , right);

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
    mergesort(arr,0,n-1);
    PrintArray(arr);
    return 0;
}
