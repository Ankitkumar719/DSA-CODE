#include<iostream>
using namespace std;

int divideBinarySearch(int divisor, int dividend){
    int start = 0;
    int end = dividend;
    int mid = start + (end - start)/2;
    int ans = 0;

    while(start < end){
        if(mid * abs(divisor) == abs(dividend)){
            ans = mid;
            break;
        }
        else if(mid * (abs(divisor)) > abs(dividend)){
            end = mid - 1;
        }
        else{
            ans = mid;
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
    if((divisor < 0 && dividend < 0) || (divisor > 0 && dividend > 0)){
        return ans;
    }
    else{
        return -ans;
    }
}

int main(){

    int divisor;
    int dividend;

    cout<<"Enter Dividend : "<<endl;
    cin>>dividend;
    cout<<"Enter Divisor : "<<endl;
    cin>>divisor;

    int solution = divideBinarySearch(divisor, dividend); // * function call

    int precision;
    cout << "Enter the number of floating digits in precision: ";
    cin >> precision;

    
    double step = 0.1;  
    double finalAnswer = solution;
    
    for(int i = 0; i < precision; i++){  
        for(double j = finalAnswer; j * divisor <= dividend; j = j + step){
            finalAnswer = j;
        }
        step = step / 10;
    }
    cout<<"Final answer : "<<finalAnswer<<endl;

    return 0;
}