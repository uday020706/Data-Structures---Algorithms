# include <iostream>
# include <algorithm>
using namespace std;
int reverseArray( int arr[], int size) {
    // 2- pointer approach 
    int start=0, end= size-1;
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main () {
    int arr[]= {1,2,3,4,5};
    int size= sizeof(arr) / sizeof(int);
    reverseArray(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i];  
    }
    
        for (int i=0; i<size; i++) {
            cout<< arr[i] <<" ";
        }
}
