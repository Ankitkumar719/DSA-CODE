#include<iostream>
#include<stack>
#include<vector>
using namespace std;

// void nextLargestElement(stack<int> &s, vector<int> &arr, vector<int> &ans){
//     int n = arr.size();

//     for(int i = n-1; i >= 0; i--){
//         int element = arr[i];

//         while(s.top() >= element){
//             s.pop();
//         }

//         ans[i] = s.top();
//         s.push(element);
//     }
// }

// ------------------------------------------------------------------------------------------------------------


// void prevSmallestElement(stack<int> &s, vector<int> &arr, vector<int> &ans){
//     int n = arr.size();

//     for(int i = 0; i < n; i++){
//         int element = arr[i];

//         while(s.top() >= element){
//             s.pop();
//         }

//         ans[i] = s.top();
//         s.push(element);
//     }
// }


int main(){

    // vector<int> arr;
    // arr.push_back(8);
    // arr.push_back(4);
    // arr.push_back(6);
    // arr.push_back(2);
    // arr.push_back(3);

    // stack<int> s;
    // s.push(-1);

    // vector<int> ans(arr.size());

    // nextLargestElement(s, arr, ans);

    // for(int i : ans){
    //     cout << i << " ";
    // }

    // ------------------------------------------------------------------------------------------------------------

    // vector<int> arr;
    // arr.push_back(8);
    // arr.push_back(4);
    // arr.push_back(6);
    // arr.push_back(2);
    // arr.push_back(3);

    // stack<int> s;
    // s.push(-1);

    // vector<int> ans(arr.size());

    // prevSmallestElement(s, arr, ans);

    // for(int i : ans){
    //     cout << i << " ";
    // }

    // ------------------------------------------------------------------------------------------------------------

    return 0;
}