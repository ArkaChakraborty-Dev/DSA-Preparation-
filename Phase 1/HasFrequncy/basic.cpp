#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;
int main(){
    int arr[]={2,3,2,5,2,7};
    unordered_map<int,int>freq;
    for (int x:arr){
        freq[x]++;

    }
    for(auto it:freq){
        cout<<it.first<<" -> "<<it.second<<endl;
    }
    return 0;
}
