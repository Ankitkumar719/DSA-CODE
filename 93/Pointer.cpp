#include <iostream>
using namespace std;

//* pointer is a variable which store the address of the variables

int main()
{

    //! Bad practice (declare without initialization)
    //* int *p;

    int *p = 0; //* declare pointer variable (null value)
    // int *p= NULL, *q = NULL;
    // int *p = nullptr, *q = nullptr;

    int a = 4; //* declare variable

    p = &a; //* store address of the variable

    // (*p)++;
    // *p = *p + 2;
    // *p = *p * 2;
    // *p = *p / 2;
    // *(p++);
    // *(++p);

    int *q = p;


    // cout << "Enter value of a : " << endl;
    // cin >> a;

    // cout << "Enter value of  : " << endl;
    // cin >> b;
    
    cout << "Sum : " << *q << endl; //* accessing by using dereference(*) operator


    return 0;
}