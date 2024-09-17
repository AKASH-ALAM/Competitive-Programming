#include <iostream>
using namespace std;

void heapify(int arr[], int n, int i){
    int largest = i; 
    int l = 2 * i + 1; 
    int r = 2 * i + 2;

    if (l < n && arr[l] > arr[largest]) largest = l;
    if (r < n && arr[r] > arr[largest]) largest = r;

    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n){
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    for (int i = n - 1; i >= 0; i--) {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

int main(){
    int arr[] = {7, 10, 4, 3, 20, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    heapSort(arr, n);
    
    cout << "K = " << k << endl;
    cout << "Output = " << arr[k-1] << endl << endl; 

    k = 4;

    cout << "K = " << k << endl;
    cout << "Output = " << arr[k-1] << endl; 
    
    return 0;
}
