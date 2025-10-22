#include<iostream>
using namespace std;

void prime(int n){
    int count = 0;
    for(int i = 1; i<=n; i++){
        if(n%i==0){
            count++;
        }
    }

    if(count<3){
        cout<<n<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter any number : ";
    cin>>n;
    for(int j=1; j<=n; j++){
    prime(j);
    }
    return 0;
}