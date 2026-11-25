#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main(){
    vector<int> arr = {7, 3, 7, 2, 3, 5, 2, 9};
    unordered_map <int,int> freq;
    for (int x :arr){
        freq [x]++;
    }

    for(int x:arr){
        if (freq[x]==1){
            cout<<x<<endl;
            break;
        }
    }

    return 0;
}