#include<iostream>
#include<unordered_set>
using namespace std;
int main(){

    unordered_multiset<int> ms;

    ms.insert(4);
    ms.insert(8);
    ms.insert(3);
    ms.insert(1);
    ms.insert(4);

    for(auto value:ms){
        cout<<value<<" ";
    }
    return 0;
}