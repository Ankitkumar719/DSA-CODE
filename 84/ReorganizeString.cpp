#include<iostream>
#include<climits>
#include <string>
using namespace std;

string reorganizeString(string s) {
    int hash[26] = {0};

    // Count frequency of each character
    for (int i = 0; i < s.length(); i++) {
        hash[s[i] - 'a']++;
    }

    char max_freq_char;
    int max_freq = INT_MIN;

    // Find the character with maximum frequency
    for (int i = 0; i < 26; i++) {
        if (hash[i] > max_freq) {
            max_freq = hash[i];
            max_freq_char = i + 'a';
        }
    }

    // Edge case: if max_freq > (n + 1) / 2, impossible to rearrange
    if (max_freq > (s.length() + 1) / 2) {
        return "";
    }

    int index = 0;
    // Place the most frequent character at even indices
    while (max_freq > 0 && index < s.length()) {
        s[index] = max_freq_char;
        max_freq--;
        index += 2;
    }

    hash[max_freq_char - 'a'] = 0;  // Mark as used

    // Place remaining characters
    for (int i = 0; i < 26; i++) {
        while (hash[i] > 0) {
            if (index >= s.length()) index = 1;  // Move to odd indices if even are filled
            s[index] = i + 'a';
            hash[i]--;
            index += 2;
        }
    }

    return s;
}

int main() {
    string s = "aab"; // Fixed string initialization
    string result = reorganizeString(s);
    cout << result << endl; // Print the result string
    return 0;
}
