#include<iostream>
#include<vector> // vector header file include.
using namespace std;
int main(){

    vector<int>arr; // vector array declare.
    vector<int>brr{10,20,30,40}; // another method to declare vector.

    cout<<arr.size()<<endl; // array size check or return the number of elements.
    cout<<arr.capacity()<<endl; /* array capacity check or 
                                return the number of elements that can be held in currently allocated storage*/

    arr.push_back(5); // to put value in the vector array.
    arr.push_back(8); // to put value in the vector array.

    for(int i=0; i<arr.size(); i++) { // for output.
        cout<<arr[i]<<endl;
    }
    cout<<endl; // for next line

    for(int i=0; i<brr.size(); i++) { // for output.
        cout<<brr[i]<<endl;
    }

    arr.pop_back(); // for removing vector arrray element.

    return 0;
}