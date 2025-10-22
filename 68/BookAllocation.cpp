#include<iostream>
#include<numeric>
using namespace std;

//* Yeh function check karta hai ki diya gaya solution valid hai ya nahi
bool isPossibleSol(int A[], int N, int M, int mid){
    int pageSum = 0;
    int count = 1; //* Pehle student ko assign kiya

    for(int i = 0; i < N; i++){
        //* Agar kisi bhi book ke pages solution se zyada hain, toh allocation possible nahi hai
        if(A[i] > mid){
            return false;
        }

        //* Agar current page ka sum solution se zyada ho jaye, toh agle student ko allocate karo
        if(pageSum + A[i] > mid){
            count++; //* Agle student ko de rahe hain
            pageSum = A[i]; //* Nayi allocation start karo

            //* Agar students ki sankhya M se zyada ho gayi, allocation impossible hai
            if(count > M){
                return false;
            }
        }
        else{
            pageSum = pageSum + A[i]; //* Page ko current student ko allocate karo
        }
    }
    return true; //* Solution possible hai
}

//* Minimum pages allocation find karne ka function
int findPages(int A[], int N, int M){
    //* Agar students ki sankhya books se zyada hai, allocation possible nahi
    if(M > N){
        return -1;
    }

    int start = 0;
    int end = accumulate(A, A + N, 0); //* Total pages ka sum
    int ans = -1;

    while(start <= end){
        int mid = (start + end) / 2;

        //* Agar yeh mid value solution ho sakti hai
        if(isPossibleSol(A, N, M, mid)){
            ans = mid; //* Possible solution ko store karo
            end = mid - 1; //* Chhote value ke liye try karo
        }
        else{
            start = mid + 1; //* Badi value ke liye try karo
        }
    }
    return ans; //* Final answer
}

//* Main function
int main(){
    int A[] = {12, 34, 67, 90};
    int N = 4;
    int M = 2;

    int ans = findPages(A, N, M);
    if (ans != -1) {
        cout << "Har student ko padne ke liye minimum pages: " << ans << endl;
    } else {
        cout << "Books allocate karna sambhav nahi hai." << endl;
    }

    return 0;
}
