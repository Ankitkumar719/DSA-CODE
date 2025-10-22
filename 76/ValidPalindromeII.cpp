#include <iostream>
#include <string>
using namespace std;

// Helper function to check if the substring s[i...j] is a palindrome
bool checkPalindrome(string s, int i, int j) {
    while (i <= j) {
        if (s[i] != s[j]) {
            return false;
        }
        else{
            i++;
            j--;
        }
    }
    return true;
}

// Main function to check if the string is a palindrome,
// or can become one by removing at most one character
bool checkPalindrome(string s) {
    int i = 0;
    int j = s.length() - 1;

    while (i <= j) {
        if (s[i] != s[j]) {
            // Try removing one character from either end and check again
            return checkPalindrome(s, i + 1, j) || checkPalindrome(s, i, j - 1);
        }
        else{
            i++;
            j--;
        }
    }
    return true;
}

int main() {
    string s = "racecar";
    cout << "Palindrome check: " << checkPalindrome(s) << endl;
    return 0;
}
