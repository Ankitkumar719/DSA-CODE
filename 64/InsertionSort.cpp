#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr{10,1,7,6,14,9};
    int n = arr.size();

    // insertion sort
    for(int i=1; i<n; i++){
        // step 1 - fetch (Current element ko uthao)
        int val = arr[i];
        // step 2 - compare (Choose element ka compare uske pehle aane wale sabhi elements se karein.)
        int j=i-1;
        for(; j >= 0; j--){
            if(arr[j] > val){
                // shift (Agar previous element bada hai to usko ek step aage shift karo)
                arr[j+1] = arr[j];
            }
            else{
                // rukna hai (Agar previous element chhota ya barabar hai to loop se bahar niklo)
                break;
            }
        }
        // step 3 - insert (Correct position par current element ko daal do)
        arr[j+1] = val;
    }

    // elements print karne ke liye (Sorted array ko print karo)
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
