#include<iostream>
#include<string.h>
using namespace std;

// Function to check if a character is a vowel
bool isVowel(char ch) {
    ch = tolower(ch);  // Convert to lowercase to handle both cases
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}

// Function to reverse only the vowels in the string
string reverseOnlyVowel(string s) {
    int l = 0;
    int h = s.length() - 1;

    while (l <= h) {
        // If both characters at l and h are vowels, swap them
        if (isVowel(s[l]) && isVowel(s[h])) { //* compare value present at that index
            swap(s[l], s[h]);
            l++;
            h--;
        }
        // If left character is not a vowel, move l forward
        else if (!isVowel(s[l])) {
            l++;
        }
        // If right character is not a vowel, move h backward
        else {
            h--;
        }
    }

    return s;
}

int main() {
    string s = "aeiou";
    string result = reverseOnlyVowel(s);
    cout << result << endl;  // Output: ab-cd (no vowels to swap in this case)
    return 0;
}
