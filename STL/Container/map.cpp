#include<iostream>
#include<map>
using namespace std;

int main(){
    // unordered_map<string, string> table;

    // // 1 way
    // table["in"] = "India";
    
    // // 2 way
    // table.insert(make_pair("us", "United States"));

    // // 3 way
    // pair<string, string> p;
    // p.first = "uk";
    // p.second = "United Kingdom";
    // table.insert(p);

    // cout<<table.size()<<endl;

    // cout<<table.at("in")<<endl;

    // // table.clear();

    // unordered_map<string, string> :: iterator it = table.begin();

    // while(it != table.end()){
    //     cout<<it->first<<" "<<it->second<<endl;
    //     it++;
    // }


    // if(table.empty() == true){
    //     cout<<"Table is empty"<<endl;
    // }
    // else{
    //     cout<<"Table is not empty"<<endl;
    // }

    // if(table.find("in") != table.end()){
    //     cout<<"Key found"<<endl;
    // }else{
    //     cout<<"Key not found"<<endl;
    // }

    // if(table.count("in") == 0){
    //     cout<<"Key not found"<<endl;
    // }
    // else{
    //     cout<<"Key found"<<endl;
    // }

    map<int, string> table;
    table.insert(make_pair(3, "India"));
    table.insert(make_pair(2, "United States"));
    table.insert(make_pair(1, "United Kingdom"));

    map<int, string> :: iterator it = table.begin();
    while(it != table.end()){
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }

    return 0;
}
