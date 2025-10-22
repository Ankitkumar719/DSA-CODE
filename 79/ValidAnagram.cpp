#include<iostream>
using namespace std;

int main(){
    string s = "anagram";
    string t = "anagram";

    int letterS = 0;
    int letterN = 0;
    int letterG = 0;
    int letterR = 0;
    int letterM = 0;

    for(int i=0; i<s.length(); i++){
        if(s[i] == 'a'){
            letterS++;
        }
        if(s[i] == 'n'){
            letterN++;
        }
        if(s[i] == 'g'){
            letterG++;
        }
        if(s[i] == 'r'){
            letterR++;
        }
        if(s[i] == 'm'){
            letterM++;
        }
    }

    int letS = 0;
    int letN = 0;
    int letG = 0;
    int letR = 0;
    int letM = 0;

    for(int i=0; i<t.length(); i++){
        if(t[i] == 'a'){
            letS++;
        }
        if(t[i] == 'n'){
            letN++;
        }
        if(t[i] == 'g'){
            letG++;
        }
        if(t[i] == 'r'){
            letR++;
        }
        if(t[i] == 'm'){
            letM++;
        }
    }

    if(letterS == letS && letterN == letN && letterG == letG && letterR == letR && letterM == letM){
        cout << "It is Valid Anagram" << endl;
    } else {
        cout << "Not a Valid Anagram" << endl;
    }

    return 0;
}



// #include<iostream>
// #include<unordered_map>
// using namespace std;

// bool isAnagram(string s, string t) {
//     if (s.length() != t.length())
//         return false;

//     unordered_map<char, int> freq;

//     // Count frequency of each character in s
//     for (char c : s) {
//         freq[c]++;
//     }

//     // Subtract frequency using t
//     for (char c : t) {
//         freq[c]--;
//         if (freq[c] < 0) return false;
//     }

//     return true;
// }

// int main() {
//     string s = "anagram";
//     string t = "anagram";

//     if (isAnagram(s, t)) {
//         cout << "It is a Valid Anagram" << endl;
//     } else {
//         cout << "Not a Valid Anagram" << endl;
//     }

//     return 0;
// }
