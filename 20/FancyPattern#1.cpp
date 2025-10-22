// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter number of rows : ";
//     cin>>n;


//     for(int row = 0; row < n; row ++){ // declare rows
//         int start_num_index = 8 - row; // declare index
//         int num = row + 1; // number which is print in each rows
//         int count_num = num; // store in variable count_num
//         for(int col=0; col<17; col++){ // declare column
//             if(col == start_num_index && count_num>0){ // condition to check position
//                 cout<<num;
//                 start_num_index = start_num_index + 2; // change the value of index at which nomber is print
//                 count_num--; // decrease the value of number
//             }
//             else{
//                 cout<<"*";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }



#include <iostream>
#include <algorithm> // for std::max
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    // Validate input
    if (n < 1 || n > 8) {
        cout << "Please enter a number of rows between 1 and 8." << endl;
        return 1;
    }

    int total_columns = 8 + n; // Dynamically calculate column width

    for (int row = 0; row < n; row++) {
        int start_num_index = 8 - row; // Calculate starting index
        int num = row + 1; // Number to print
        int count_num = num; // Remaining count of numbers to print

        for (int col = 0; col < total_columns; col++) {
            if (col == start_num_index && count_num > 0) {
                cout << num;
                start_num_index += 2; // Move to the next index
                count_num--; // Decrease remaining count
            } else {
                cout << "*";
            }
        }
        cout << endl;
    }

    return 0;
}
