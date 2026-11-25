#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main (){
    vector <int> arr={2,5,6,1,4,15};
    int target = 9;
    unordered_map <int,int>mp;
    for (int i=0;i< (int)arr.size();i++){
        int complement = target - arr[i];
        if (mp.find(complement) != mp.end()){
            cout <<mp[complement]<<" "<<i<<endl;
            break;
        }

        mp[arr[i]]=i;
    }

    return 0;
}