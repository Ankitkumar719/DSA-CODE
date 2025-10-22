#include<iostream>
#include<string.h>
using namespace std;

int expandAroundIndex(string s, int left, int right){
    int count = 0;
    while(left >= 0 && right < s.length() && s[left] == s[right]){
        count ++;
        left--;
        right++;
    }
    return count;
}

int countStrings(string s){
    int totalCount = 0;
    int n = s.length();

    for(int center = 0; center < n; center++){

        // odd
        int oddAns = expandAroundIndex(s, center, center);
        totalCount = totalCount + oddAns;

        // even
        int evenAns = expandAroundIndex(s, center, center + 1);
        totalCount = totalCount + evenAns;
    }
    return totalCount;
}

int main(){

    string s = "noon";
    cout<<"Number of substrings which is palindrome : "<<countStrings(s)<<endl;

    return 0;
}