#include<iostream>
#include<cstring>

using namespace std;

bool checkPelindrome(char word[]){
    int i = 0;
    int j = strlen(word) - 1;

    while(i <= j){
        if(word[i] != word[j]){
            return false;
        }
        else {
            i++;
            j--;
        } 
    }
    return true;
}

int main(){

    char array[100] = "racecar";
    cout<<"Palindrome check : "<<checkPelindrome(array);
    return 0;
}