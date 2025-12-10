#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
    unordered_set<int> s;

    s.insert(10);
    s.insert(5);
    s.insert(30);

    cout<<s.size()<<endl;
    // s.clear();
    // cout<<s.size()<<endl;

    unordered_set<int>::iterator it = s.begin();
    while(it != s.end()){
        cout<<*it<<" ";
        it++;
    }
    cout<<endl;

    // if(s.count(5) == 1){
    //     cout<<"Found"<<endl;
    // }
    // else{
    //     cout<<"Not Found"<<endl;
    // }
    
    // s.erase(s.begin(), s.end());

    if(s.empty()){
        cout<<"Set is empty"<<endl;
    }
    else{
        cout<<"Set is not empty"<<endl;
    }

return 0;
}