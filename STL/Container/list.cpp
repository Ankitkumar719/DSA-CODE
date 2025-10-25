#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> myList1;

    myList1.push_back(10);
    myList1.push_back(20);
    myList1.push_back(30);

    myList1.insert(myList1.begin(), 0);
    myList1.erase(myList1.begin(), myList1.end());

    cout<<myList1.size()<<endl;
    myList1.push_front(5);
    myList1.push_front(1);
    myList1.push_front(0);

    myList.pop_back();
    myList.pop_front();

    cout<<myList.size()<<endl;

    cout<<myList.front()<<endl;
    cout<<myList.back()<<endl;


    myList.clear();
    cout<<myList.size()<<endl;
    if(myList.empty() == true){
        cout<<"List is empty"<<endl;
    }else{
        cout<<"List is not empty"<<endl;
    }
    myList1.remove(10);
    myList1.remove(20);

    list<int> myList2;
    myList2.push_back(100);
    myList2.push_back(200);
    myList2.push_back(300);

    myList1.swap(myList2);

    list<int>::iterator it = myList1.begin();
    while(it != myList1.end()){
        cout<<*it<<" ";
        it++;
    }
    
    return 0;
}