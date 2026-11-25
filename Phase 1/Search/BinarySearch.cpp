#include <iostream>
#include <vector>
using namespace std;

int binarySearch (vector<int>&arr,int target){
    int low = 0;
    int high = arr.size()-1;

    while(low<=high){
        int mid = low+(high-low)/2;
        if (arr[mid]==target){
            return mid;
        }
        else if (arr[mid]<target){
            low = mid+1;
        }
        else {
            high = mid-1;
        }
    }
    return -1;
}

int main(){
    vector<int> arr = {3, 7, 11, 15, 19, 23, 27, 31, 35};
    int target = 27;
    int result = binarySearch(arr,target);
    cout<<result<<endl;
    return 0;
}