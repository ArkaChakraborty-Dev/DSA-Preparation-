#include <iostream>
#include <vector>
using namespace std;

void LinearSearch(vector<int>& arr, int search) {
    bool found = false;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == search) {
            cout << "Element found at index " << i << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Element not found" << endl;
    }
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

    int search;
    cout << "Enter element to search: ";
    cin >> search;

    LinearSearch(arr, search);

    cout << "Array: ";
    PrintArray(arr);

    return 0;
}