#include<iostream>
using namespace std;
int main(){

    int a, b, c; // variable declare (global variable)

    cout<<"Enter first value : ";
    cin>>b;
    cout<<"Enter second value : ";
    cin>>c;
    for(int i=0; i<10; i++){

    cout<<endl<<"Enter : "<<endl<<"1 for sum"<<endl<<"2 for subtract"<<endl<<"3 for product"<<endl<<"4 for divide"<<endl<<"0 for end"<<endl;
    cin>>a;
    
    if(a==0){
        break;
    }
    
    switch (a) // switch case
    {
    case 1 : cout<<"Sum : "<<b+c;
        break;

    case 2 : cout<<"Sub : "<<b-c;
        break;

    case 3 : cout<<"Product : "<<b*c;
        break;

    case 4 : cout<<"Divide : "<<b/c;
        break;
    
    default: cout<<"Wrong input";
        break;
        }
    }
    return 0;
}