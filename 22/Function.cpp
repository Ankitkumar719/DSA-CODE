#include<iostream>
using namespace std;

int add(int , int); // function declare

int main(){ // function call

    int a,b;
    cout<<"Enter value of a : ";
    cin>>a;
    cout<<"Enter value of b : ";
    cin>>b;
    int sum = add(a,b);
    cout<<"Sum of two numbers is : "<<sum<<endl<<endl<<endl;
    return 0;

}

int add(int x, int y){ // function define
    return x+y;  // return value
}
