#include <iostream>
#include <vector>
using namespace std;

void BubbleSort(vector<int>& arr) {
    for (int i = 0; i < arr.size() - 1; i++) {

        for (int j = 0; j < arr.size() - i - 1; j++) {

            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
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
        cout<<"enter elements "<<i<<" ";
        int x;
        cin>>x;
        arr.push_back(x);
    }
    BubbleSort(arr);
    PrintArray(arr);
    return 0;
}