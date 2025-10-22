#include<iostream>
using namespace std;

int Sqrt(int target){
    int start = 0;
    int end = target;
    int mid = start + (end - start)/2;
    int sol = -1;

    while(start <= end){
        if(mid * mid == target){
            return mid;
        }

        if(mid * mid > target){
            end = mid - 1;
        }
        else{
            sol = mid;
            start = mid + 1;
        }

        mid = start + (end - start)/2;
    }
    return sol;
}

int main(){
    int n;

    cout << "Enter any number: ";
    cin >> n;

    int precision;
    cout << "Enter the number of floating digits in precision: ";
    cin >> precision;

    int ans = Sqrt(n);
    // cout << "Square Root: " << ans << endl;
    
    double step = 0.1;  
    double finalAnswer = ans;
    
    for(int i = 0; i < precision; i++){  
        for(double j = finalAnswer; j * j <= n; j = j + step){
            finalAnswer = j;
        }
        step = step / 10;
    }

    cout << "Final answer: " << finalAnswer << endl;

    return 0;
}