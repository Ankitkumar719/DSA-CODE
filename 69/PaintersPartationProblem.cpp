#include<iostream> 
using namespace std; 

//* Ye function check karta hai ki diye gaye mid time mein M painters kaam complete kar sakte hain ya nahi  
bool possibleAns(int A[], int N, int M, int mid){
    int timeSum = 0; //* Current painter ka total time  
    int count = 1; //* Painter ki ginti (shuru mein pehla painter)  

    //* Har board ko ek-ek karke check karo  
    for(int i = 0; i < N; i++){
        if(A[i] > mid){ //* Agar kisi board ka time mid se zyada hai, to impossible hai  
            return false;
        }
        
        if(timeSum + A[i] > mid){ //* Agar current painter se yeh board nahi ho sakta  
            count++; //* Naya painter lena padega  
            timeSum = A[i]; //* Naye painter ke liye time set karo (Bacha hua time)
            if(count > M) { //* Agar painters ki ginti M se zyada ho jaye  
                return false; //* yeh mid time mein possible nahi hai  
            }
        }
        else{
            timeSum = timeSum + A[i]; //* Current painter ke time mein add karo  
        }
    }
    return true; //* Sabhi boards mid time mein paint ho gaye  
}

//* Main function jo minimum time nikalta hai  
int minTime(int A[], int N, int M){
    if(M > N) return -1; //* Agar painters ki ginti boards se zyada hai, to impossible  

    int start = 0; //* Starting range  
    int end = 0; //* Ending range (sabka total time)  
    for(int i = 0; i < N; i++){
        end += A[i]; //* Sab boards ka total sum  
    }

    int ans = -1; //* Final answer store karne ke liye  

    //* Binary search start karo  
    while(start <= end){
        int mid = start + (end - start) / 2; //* Mid point nikalna  

        //* Agar mid time mein painting possible hai  
        if(possibleAns(A, N, M, mid)){
            ans = mid; //* Potential answer  
            end = mid - 1; //* Chhote time ke liye search karo  
        }
        else{
            start = mid + 1; //* Bade time ke liye search karo  
        }
    }
    return ans; //* Final answer return karo  
}

//* Main program  
int main(){
    int A[] = {10, 20, 30, 40}; //* Boards ko paint karne ka time  
    int N = 4; //* Boards ki ginti  
    int M = 2; //* Painters ki ginti  

    int ans = minTime(A, N, M); //* Minimum time nikalna  
    if (ans != -1) {
        cout << "Har painter ko paint karne ka time " << ans << endl; //* Answer print karo  
    } else {
        cout << "Painter ko paint karne ka time nahi mila " << endl; //* Impossible case  
    }

    return 0;
}
