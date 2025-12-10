#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void printDouble(int a){
    cout<<2*a<<endl;
}

bool checkEven(int a){
    return a%2==0;
}

int main(){
    vector<int> arr(6);
    arr[0]=10;
    arr[1]=21; 
    arr[2]=30;
    arr[3]=13;
    arr[4]=50;
    arr[5]=11;

    //^ for_each: Applies a function to each element in a range
    // for_each(arr.begin(), arr.end(), printDouble);
    
    //^ find: Search for a specific element in a range.
    // int target=40;
    // auto it = find(arr.begin(), arr.end(), target);
    // cout<<*it<<endl;

    //^ find_if: Searches for the first elements that satisfies a given predicate.
    // auto it = find_if(arr.begin(), arr.end(), checkEven);
    // cout<<*it<<endl;

    //^ count: Counts the occurances of a value in a range.
    // int target = 11;
    // int ans = count(arr.begin(), arr.end(), target);
    // cout<<ans<<endl;
    // return 0;

    //^ count_if: COunt the elements that satisfy a given predicate.
    // int ans = count_if(arr.begin(), arr.end(), checkEven);
    // cout<<ans<<endl;

    //^ sort: Sorts the elements in a range in ascending order.
    // sort(arr.begin(), arr.end());
    // for(int a:arr){
    //     cout<<a<<" ";
    // }

    //^ reverse: Reverses the order of elements in a range.
    // reverse(arr.begin(), arr.end());
    // for(int a:arr){
    //     cout<<a<<" ";
    // }

    //^ rotate: Rotates elements in a range
    // for(int a:arr){
    //     cout<<a<<" ";
    // }
    // cout<<endl;

    // rotate(arr.begin(), arr.begin()+3, arr.end());
    // for(int a:arr){
    //     cout<<a<<" ";
    // }
    // cout<<endl;

    // rotate(arr.begin(), arr.end()-3, arr.end());
    // for(int a:arr){
    //     cout<<a<<" ";
    // }

    //^ unique: Removes duplicate elements from a stored range.
    // sort(arr.begin(), arr.end());
    // auto it = unique(arr.begin(), arr.end());
    // arr.erase(it, arr.end());
    // for(int a:arr){
    //     cout<<a<<" ";
    // }

    //^ partation: Divides elements in a range into two groups based on a predicate.
    // auto it = partition(arr.begin(), arr.end(), checkEven);
    // for(int a:arr){
    //     cout<<a<<" ";
    // }
}