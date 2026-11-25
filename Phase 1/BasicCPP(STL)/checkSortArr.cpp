#include<iostream>
#include <vector>
using namespace std;

void CheckSortArr(vector<int>& arr) {
    for (int i = 0; i < arr.size() - 1; i++) {

        if (arr[i] > arr[i + 1]) {
            cout << "Array is unsorted";
            return;
        }
    }

    cout << "Array is sorted";
}
void PrintArray(vector<int> arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr;
    int n;

    cout << "Enter required number of elements: ";
    cin >> n;

    cout << "Enter elements: ";

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    CheckSortArr(arr);
    cout << "Array: ";
    PrintArray(arr);

    return 0;
}