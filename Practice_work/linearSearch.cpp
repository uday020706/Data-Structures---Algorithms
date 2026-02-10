# include <iostream>

int linearSearch(int arr[], int target, int size) {
    for (int i=0; i < size; i++ ) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}
using namespace std;
int main () {
    int arr[]= {1,2,3,6,9,5,8}; 
    int size= sizeof(arr) / sizeof(int);
    int target = 9;
    cout<<linearSearch(arr, target, size);
}