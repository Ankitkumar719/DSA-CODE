#include<iostream>     // For input/output operations
#include<string>       // For using the string class
using namespace std;

// Function to check if two strings are isomorphic
bool isIsomorphic(string s, string t){
    // Array to store the mapping of characters from string `s` to `t`
    int hash[256] = {0}; 
    
    // Boolean array to mark if a character in `t` has already been mapped
    bool istCharMapped[256] = {0};

    // Iterate through each character of the strings
    for(int i = 0; i < s.size(); i++){
        // If there is no mapping for s[i] and t[i] is not already mapped
        if(hash[s[i]] == 0 && istCharMapped[t[i]] == 0){
            // Map s[i] to t[i]
            hash[s[i]] = t[i];

            // Mark t[i] as mapped
            istCharMapped[t[i]] = true; 
        }
    }

    // Check if all mapped characters match the second string
    for(int i = 0; i < s.size(); i++){
        if(char(hash[s[i]]) != t[i]){
            return false; // Mismatch found, not isomorphic
        }
    }

    return true; // Strings are isomorphic
}

int main(){
    string s = "egg", t = "add"; // Example input strings

    // Call the isIsomorphic function
    bool result = isIsomorphic(s, t);
    
    // Output result based on function return
    if(result == true){
        cout << "String is Isomorphic " << endl;
    }
    else{
        cout << "String is not Isomorphic " << endl;
    }

    return 0;
}
