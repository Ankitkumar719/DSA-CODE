#include<iostream>
using namespace std;

// void student(int total) // here 'int total' is parameter, 
//                         // the value declare in function declaration known as parameter.
//     {
//     if(total<=100 && total>=90){
//         cout<<"A+";
//     }
//     else if(total<=90 && total>=80){
//         cout<<"A";
//     }
//     else if(total<=80 && total>=70){
//         cout<<"B+";
//     }
//     else if(total<=70 && total>=60){
//         cout<<"B";
//     }
//     else if(total<=60 && total>=50){
//         cout<<"C+";
//     }
//     else if(total<=50 && total>=40){
//         cout<<"C";
//     }
//     else if(total<=40 && total>=30){
//         cout<<"D";
//     }
//     else 
//     cout<<"Fail";
// }

// int main(){
//     float marks;
//     cout<<"Enter marks obtained : ";
//     cin>>marks;
//     student(marks); // here 'marks' is argument, 
//                     // the value declare in function calling or inside int main is known as argument.
//     return 0;
// }


char getgrade(int marks){
    if(marks>=90){
        return 'A';
    }
    
    else if(marks>=80){
        return 'B';
    }
    
    else if(marks>=70){
        return 'C';
    }
    
    else{
        return 'D';
    }
}

int main(){
    int marks;
    cout<<"Enter your marks : ";
    cin>>marks;
    char finalgrade = getgrade(marks);
    cout<<finalgrade;
    return 0;
}