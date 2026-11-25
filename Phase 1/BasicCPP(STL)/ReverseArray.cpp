#include <iostream>
#include <vector>
using namespace std;

void ArrayRev(vector<int>& arr) {
    int start = 0;
    int end = arr.size() - 1;

    while (start < end) {

        swap (arr[end],arr[start]);

        start++;

        end --;

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

    ArrayRev(arr);
    cout << "Array: ";
    PrintArray(arr);

    return 0;
}