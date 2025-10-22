#include<iostream>
#include<string.h>
using namespace std;

//& bool compareString(string a, string b){
//     if(a.length() != b.length()){
//         return false;
//     }
//     else{
//         int j=0;
//         for(int i=0; i<a.length(); i++){
//             if(a[i] != b[j]){
//                 return false;
//             }
//             j++;
//         }
//     }
//     return true;
// }


//& bool checkPelindrome(char word[]){
//     int i=0;
//     int n=strlen(word);
//     int j=n-1;

//     while(i <= j){
//         if(word[i] != word[j]){
//             return false;
//         }
//         else {
//             i++;
//             j--;
//         }
//     }
//     return true;
// }



//& int getLength(char name[]){
//     int length = 0;
//     int i = 0;

//     while(name[i] != 0){
//         length++;
//         i++;
//     }
//     return length;
// }



//& int reverseCharArray(char name[]){
//     int i = 0;
//     int n = getLength(name);
//     int j = n - 1;

//     while(i<=j){
//         swap(name[i], name[j]);
//         i++;
//         j--;
//     }
// }



//& void replaceSpaces(char sentence[]){
//     int i = 0;
//     int n = strlen(sentence);

//     for(int i = 0; i<n; i++){
//         if(sentence[i] == ' '){
//             sentence[i] = '@';
//         }
//     }
// }


// int main(){

    // char name[] = {"Ankit kumar"};
    // char name[100];
    
    // cout<<"What is your name : ";
    // cin>>name;
    // cin.getline(name, 100); //* to store full line of input with spcace
    // cout<<"My name is : "<<name<<endl;

    // cout<<"Length of string : "<<getLength(name)<<endl;

    // reverseCharArray(name);
    // cout<<"Reverse string : "<<name<<endl;

    // char sentence[100];

    // cout<<"Enter sentence : "<<endl;
    //& cin.getline(sentence, 100);

    // replaceSpaces(sentence);
    // cout<<sentence<<endl;

    // char array[100] = "racecar";
    // cout<<"Palindrome check : "<<checkPelindrome(array);



    -----------------------------------------------------------------------------------------------
    // string str;

    // cout<<"Enter any string value : ";
    // cin>>str;

    // cout<<str;

    // cout<<"Length : "<<str.length()<<endl;

    // cout<<"isEmpty : "<<str.empty()<<endl;

    //& str.push_back('A');
    // cout<<str<<endl;

    //& str.pop_back();
    // cout<<str<<endl;

    //& cout<<str.substr(0, 2)<<endl; 

    // string a = "Love";
    // string b = "Love";

    //& if(a.compare(b) == 0){
    //     cout<<"a and b are exactly same strings"<<endl;
    // }
    // else{
    //     cout<<"a and b are not same strings"<<endl;
    // }


    // string x ="bbcd";
    // string y ="bcda";

    //& cout<<compareString(x, y)<<endl;

    //* If first letter of first string is less then or equal to first letter of second string then the compare putput value is -1;
    //* If first letter of first string is greater then or equal to first letter of second string then the compare putput value is 1;    
    // cout<<x.compare(y)<<endl; 
    

    // string sentence = "Hello jee kaise ho saare : ";
    // string target = "Hi";

    
    //& cout<<sentence.find(target)<<endl;

    // if(sentence.find(target) == std::string::npos){
    //     cout<<"Not found"<<endl;
    // }

    // string str = "This is my first message";
    // string word = "Hello";

    //& str.replace(0, 4, word);
    // cout<<str<<endl;
    //& str.replace(11, 6, " Second");
    // cout<<str<<endl;

    //& str.erase(0, 5);
    // cout<<str<<endl;

    // return 0;
}


/*
==============================🧾 C++ String & Char Array Handling – Quick Notes ==============================

🔹 Character Array (`char[]`) – C-style

1. Get Length
----------------
int getLength(char name[]) {
    int len = 0;
    while (name[len] != '\0') len++;
    return len;
}

2. Reverse Char Array
-----------------------
void reverseCharArray(char name[]) {
    int i = 0, j = getLength(name) - 1;
    while (i <= j) swap(name[i++], name[j--]);
}

3. Replace Spaces with '@'
----------------------------
void replaceSpaces(char sentence[]) {
    for (int i = 0; sentence[i] != '\0'; i++)
        if (sentence[i] == ' ') sentence[i] = '@';
}

4. Check Palindrome
---------------------
bool checkPalindrome(char word[]) {
    int i = 0, j = strlen(word) - 1;
    while (i <= j) {
        if (word[i++] != word[j--]) return false;
    }
    return true;
}


🔹 `string` – C++ STL String Class

Common Methods:
----------------
str.length();       // Get length
str.empty();        // Check if string is empty
str.push_back('A'); // Add character at end
str.pop_back();     // Remove last character
str.substr(0, 2);   // Substring from index 0, length 2

Compare Strings:
------------------
a.compare(b); 
// Returns:
// 0  -> a == b
// <0 -> a < b
// >0 -> a > b

Find Substring:
----------------
str.find("Hi"); 
// Returns index if found, or string::npos if not found

Replace Substring:
--------------------
str.replace(startIndex, length, "newText");

Erase Substring:
------------------
str.erase(startIndex, length);


🔸 Char Array vs. `string` Comparison

| Feature        | `char[]` (C-style)   | `string` (C++ STL)      |
|----------------|----------------------|--------------------------|
| Header         | `<cstring>`          | `<string>`               |
| Flexibility    | Manual handling      | Built-in methods         |
| Dynamic Size   | No                   | Yes                      |
| Easy to use    | No (manual ops)      | Yes                      |

==============================================================================================================
*/
