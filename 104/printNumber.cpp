#include<iostream>
using namespace std;

// void printNum(int n){
//     if(n > 50){
//         return;
//     }

//     cout<<n<<" ";
//     printNum(n + 10);
// }

// int main(){
//     int n = 10;
//     printNum(n);
//     return 0;
// }

void printNum(int arr[], int n, int i){
    if(i > n){
        return;
    }

    printNum(arr, n, i+1);

    cout<<arr[i]<<" ";

    // printNum(arr, n, i+1);
}

int main(){
    int arr[] = {10,20,30,40,50};
    int n = 4;
    int i = 0;

    printNum(arr, n, i);
    return 0;
}