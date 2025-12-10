#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){

    vector<int> arr;
    arr.push_back(22);
    arr.push_back(11);
    arr.push_back(55);
    arr.push_back(66);
    arr.push_back(77);

    make_heap(arr.begin(), arr.end());
    arr.push_back(99);
    push_heap(arr.begin(), arr.end()); // to insert element in max heap
    for(int a:arr){
        cout<<a<<" ";
    }
    cout<<endl;
    pop_heap(arr.begin(), arr.end());
    arr.pop_back();
    for(int a:arr){
        cout<<a<<" ";
    }
    return 0;
}