//! Doubt

#include <iostream>
#include <vector>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    int charIndex = 0;         // Keeps track of the character position we're comparing
    string result = "";        // Stores the resulting common prefix

    while (true) {
        char curr_ch = 0;      // Stores the current character being checked

        for (int strIndex = 0; strIndex < strs.size(); strIndex++) {
            // If we've reached the end of any string, stop checking
            if (charIndex >= strs[strIndex].size()) {
                curr_ch = 0;
                break;
            }

            // For the first string, initialize curr_ch with its char at charIndex
            if (curr_ch == 0) {
                curr_ch = strs[strIndex][charIndex];
            }
            // If character doesn't match with previous ones, break
            else if (curr_ch != strs[strIndex][charIndex]) {
                curr_ch = 0;
                break;
            }

            // update strIndex++;
        }

        // If we found no matching character at this index, exit the loop
        if (curr_ch == 0) {
            break;
        }

        // Add the matching character to result and move to next character
        result.push_back(curr_ch);
        charIndex++;
    }

    return result;
}

int main() {
    vector<string> strs = {"flower", "flow", "flight"};

    // Call the function and print the longest common prefix
    string prefix = longestCommonPrefix(strs);
    cout << "Longest Common Prefix: " << prefix << endl;

    return 0;
}
