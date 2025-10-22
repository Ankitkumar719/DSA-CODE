#include<iostream>
using namespace std;



int solve(int& a){
    a++;
    return a;

}
int main(){

    int a = 5;

    solve(a);

    cout<<a;
    return 0;
}

// int* solve(){
//     int a = 5;

//     int* ans = &a;

//     cout<<ans;
// }


