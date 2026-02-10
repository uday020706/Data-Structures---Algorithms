#include <iostream>
using namespace std;
int uniqueElements(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans ^= arr[i];
    }
    return ans;
}

int main()
{
    int arr[] = {1, 2, 3, 3, 2, 5, 5};
    int size = sizeof(arr) / sizeof(int);
    cout << uniqueElements(arr, size);
}
