#include <iostream>
#include <vector>
#include <algorithm> //for line 12 two arguments in max function
#include <climits> //for INT_MIN
using namespace std ;

int CalMaxSum (vector <int>&arr){
    int currentSum =0;
    int maxSum = INT_MIN;

    for(int i=0;i<(int)arr.size();i++){
        currentSum = max(arr[i],currentSum+arr[i]);
        maxSum = max(maxSum, currentSum);
    } 
    return maxSum;

}

int main(){
    vector<int>arr={-2,1,-3,4,-1,2,1,-5,4};
    cout<<CalMaxSum(arr)<<endl;
    return 0;

}