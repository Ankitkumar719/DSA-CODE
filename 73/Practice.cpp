#include<iostream>
using namespace std;

void replace(char arr[], int size){
    for(int i=0; i<size; i++){
        if(arr[i] == ' '){
            arr[i] = 'X';
        }
    }
}

void LCtoUC(char arr[], int size){

    for(int i=0; i<size; i++){

        if(arr[i] >= 'a' && arr[i] <= 'z'){

            arr[i] = arr[i] - 'a' + 'A';
        }
    }
}


void UCtoLC(char arr[], int size){

    for(int i=0; i<size; i++){

        if(arr[i] >= 'A' && arr[i] <= 'Z'){

            arr[i] = arr[i] - 'A' + 'a';
        }
    }
}

int main(){

char arr[50];
cin.getline(arr,50);
// replace(arr, 50);
LCtoUC(arr, 50);
cout << arr<<endl;
UCtoLC(arr, 50);
cout << arr<<endl;
    return 0;
}