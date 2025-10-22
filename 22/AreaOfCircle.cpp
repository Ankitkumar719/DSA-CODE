#include<iostream>
using namespace std;

float areaCircle(int radius){
    return (3.14*radius*radius);
}

int main(){
    int radius;
    cout<<"Enter radius of circle : ";
    cin>>radius;
    float area = areaCircle(radius);
    cout<<"Area of cicle : "<<area;
    return 0;
}