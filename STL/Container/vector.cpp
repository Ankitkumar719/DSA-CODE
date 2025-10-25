#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    v.pop_back();
    cout<<v.size()<<endl;

    cout<<v.back()<<endl;
    cout<<v.front()<<endl;
    cout<<v.at(0)<<endl;
    cout<<v[0]<<endl;

    // for each loop
    for(int i:v) {
        cout << i << " ";
    }

    vector<int>::iterator it = v.begin();
    while(it != v.end()) {
        cout << *it << " ";
        it++;
    }

    vector<vector<int>> arr(5, vector<int>(4,0));
    int totalRows = arr.size();
    int totalColumns = arr[0].size();


    vector<vector<int>>brr(4);
    brr[0] = vector<int>(4);
    brr[1] = vector<int>(3);
    brr[2] = vector<int>(2);
    brr[3] = vector<int>(1);


    return 0;
}