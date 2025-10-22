#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// copy code from here
int compress(vector<char>& chars) {
    int index = 0, count = 1;
    char prev = chars[0];

    for(int i = 1; i < chars.size(); ++i){
        if(chars[i] == prev){
            count++;
        }else{
            chars[index++] = prev;
            if(count > 1){
                int start = index;
                while(count){
                    chars[index++] = (count % 10) + '0';
                    count = count / 10;
                }
                reverse(chars.begin() + start, chars.begin() + index);
            }
            prev = chars[i];
            count = 1;
        }
    }

    chars[index++] = prev;
    if(count > 1){
        int start = index;
        while(count){
            chars[index++] = (count % 10) + '0';
            count = count / 10;
        }
        reverse(chars.begin() + start, chars.begin() + index);
    }
    return index; // return the size of array
}
// to here

int main() {
    vector<char> chars = {'a','a','b','b','c','c','c'};

    int newLength = compress(chars);

    for(int i = 0; i < newLength; ++i) {
        cout << chars[i];
    }
    cout << endl;

    return 0;
}
