#include <iostream>
#include  <vector>
#include <unordered_map>
using namespace std;

int main(){
    vector<int>arr = {1,4,2,3,4,5,6,7,5,4,3,2};
    unordered_map<int,int> freq;
    for (int x :arr){
        freq [x] ++ ; 
    }

    for (auto it:freq){
        cout<<it.first<<" -> "<<it.second<<endl;
    }

    return 0;
}
