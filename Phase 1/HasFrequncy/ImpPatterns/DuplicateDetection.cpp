#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main(){
    vector <int> arr ={1,1,4,5,7,7,8,9,1};
    unordered_set<int>seen;
    for (int x:arr){
        if (seen.find(x) != seen.end()){
            cout<<"Duplicate Found ";
            break ;

        }
        seen.insert(x);
    }

    return 0;
}