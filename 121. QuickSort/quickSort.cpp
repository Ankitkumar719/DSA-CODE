#include<iostream>
using namespace std;

int partition(int arr[], int s, int e)
{
    // step1: choose pivot element
    int pivotIndex = s;
    int pivotElement = arr[s];

    //step2: find right position for pivot element and place it there 
    int count = 0;
    for(int i=s+1; i<=e; i++)
    {
        if(arr[i] <= pivotElement)
        {
            count++;
        }
    }

    // when we come out from the loop then the right position of index is ready
    int rightIndex = s + count;
    swap(arr[pivotIndex], arr[rightIndex]); // swap pivot element to right index element 
    pivotIndex = rightIndex; // update index of pivot element
    
    // step 3: left me chhote and right me bade elements
    int i = s;
    int j = e;

    while(i < pivotIndex && j > pivotIndex)
    {
        while(arr[i] <= pivotElement)
        {
            i++;
        }

        while(arr[j] > pivotElement)
        {
            j--;
        }

        // 2 case ho sakte h ->
        // 
        if(i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i], arr[j]);
        }
    }
    return pivotIndex;
}

void quickSort(int arr[], int s, int e)
{
    // base case
    if(s >= e) // agar mera start end ke barabar ho jai to return kar do
    {
        return;
    }

    // partition logic:
    // partion karo jise ek index mil jayga
    int p = partition(arr, s, e);

    // recursive call
    // left partition karo recursively call kare ke
    quickSort(arr, s, p-1);
    
    // right partition karo recursively call karke
    quickSort(arr, p+1, e);
}


int main(){
    int arr[] = {8,1,3,4,20,50,30};
    int n = 7;
    int s = 0;
    int e = n-1;

    quickSort(arr, s, e);

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}