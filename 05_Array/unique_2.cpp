# include <iostream>
using namespace std;

int unique(int arr[], int size)
{
    int ans=0;
    for (int i=0; i<size; i++)
    {
        ans =ans^arr[i];         // this logic works only when (one element appears once and rest elements twice..)
    }
    cout<<ans;
}


int main ()
{
    int arr[]= {1,2,3,3,2,5,1};
    int size = sizeof(arr) / sizeof(int);
    unique(arr, size);


}