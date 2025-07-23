# include <iostream>
using namespace std;

int unique (int arr[], int size)
{
    for (int i=0;i<size;i++)
    {
        int j;
        for (j=0; j<size; j++)
        {
            if (i!=j && arr[i]==arr [j])
            {
                break;
            }
        }
        if (j==size)
        cout<<arr[i];
    }
}
int main ()
{
    int arr[]= {1,3,2,2,4,5};
    int size = sizeof(arr) / sizeof(int);
    unique(arr, size);


}