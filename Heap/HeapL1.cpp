#include<iostream>
// #include<queue>
using namespace std;

class Heap{
    public:
        int *arr;
        int size;
        int index;

        Heap(int capacity){
            size = capacity;
            arr = new int[size];
            index = 0;
        }


        void printHeap(){
            for(int i=0; i<size; i++){
                if(i == 0){
                    cout<<"X"<<" ";
                }
                else{
                    cout<<arr[i]<<" ";
                }
            }
            cout<<endl;
        }

        void insert(int value){
            if(index == size-1){
                cout<<"Overflow"<<endl;
                return;
            }

            index++;
            arr[index] = value;

            int childIndex = index;

            while(childIndex > 1){
                int parentIndex = childIndex/2;

                if(arr[childIndex] > arr[parentIndex]){
                    swap(arr[childIndex], arr[parentIndex]);
                    childIndex = parentIndex;
                }else{
                    break;
                }
            }
        }

        void deleteFromHeap(){
            swap(arr[1], arr[index]);
            index--;

            int capacity = index;
            // heapify(arr, capacity, 1);
        }

};

void heapify(int *arr, int capacity, int currIndex) {
    int i = currIndex;
    int leftChild = 2 * i;
    int rightChild = 2 * i + 1;
    int largestIndex = i;

    if (leftChild <= capacity && arr[leftChild] > arr[largestIndex]) {
        largestIndex = leftChild;
    }
    if (rightChild <= capacity && arr[rightChild] > arr[largestIndex]) {
        largestIndex = rightChild;
    }
    if (largestIndex != i) {
        swap(arr[i], arr[largestIndex]);
        heapify(arr, capacity, largestIndex);
    }
}

// void buildHeap(int *arr, int n){
//     for(int i=0; i=n/2; i--){
//         heapify(arr, n, i);
//     }
// }

void buildHeap(int *arr, int n){
    for(int i=n/2; i>=1; i--){
        heapify(arr, n, i);
    }
}

void heapSort(int *arr, int n){
    while(n>1){
        swap(arr[1], arr[n]);
        n--;
        heapify(arr, n, 1);
    }
}

int main(){
    // Heap pq(5);

    // pq.insert(5);
    // pq.insert(7);
    // pq.insert(8);
    // pq.insert(2); 
    // pq.insert(4);

    // cout<<"Printing heap element"<<endl;
    // pq.printHeap();

    // pq.deleteFromHeap();
    // cout<<"Printing heap element"<<endl;
    // pq.printHeap();

    // int arr[] = {-1,10, 20, 30,40,50};
    // int size = 6;
    // Heap pq(1000);
    // pq.buildHeap(arr, size);

    // cout<<"Printing Array:"<<endl;
    // for(int i=0; i<size; i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;

    int arr[] = {-1, 10, 20, 30, 40, 50};
    int n = 5;
    // Heap pq(1000);
    // pq.buildHeap(arr, size);
    buildHeap(arr, n);

    // cout<<"Printing Heap:"<<endl;
    // for(int i=0; i<n; i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;

    cout<<"Printing array before heapsort call:"<<endl;
    for(int i=0; i<=n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    heapSort(arr, n);

    cout<<"Printing array after heapsort call:"<<endl;
    for(int i=0; i<=n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
} 