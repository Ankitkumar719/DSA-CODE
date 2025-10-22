#include <iostream>
#include <vector>
#include <map>
#include <array>
#include <string>

using namespace std;

// Function to get frequency hash of characters
array<int, 256> getHash(const string& s) {
    array<int, 256> hash = {0}; // initialize all to 0
    for (char ch : s) {
        hash[ch]++;
    }
    return hash;
}

// Function to group anagrams
vector<vector<string>> groupAnagrams(vector<string>& strs) {
    map<array<int, 256>, vector<string>> mp;

    for (const string& str : strs) {
        mp[getHash(str)].push_back(str);
    }

    vector<vector<string>> ans;
    for (auto it = mp.begin(); it != mp.end(); ++it) {
        ans.push_back(it->second);
    }

    return ans;
}

int main() {
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> result = groupAnagrams(strs);

    // Print result
    for (const auto& group : result) {
        for (const auto& word : group) {
            cout << word << " ";
        }
        cout << endl;
    }

    return 0;
}
