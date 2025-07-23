# include <iostream>
# include <climits>
# include <algorithm>
using namespace std;

int min_max(int arr[], int size, int &smallest, int &largest)
{
    for (int i=0; i<size; i++)
    {
        smallest =min(arr[i], smallest);
        largest =max(arr[i], largest);
    }
    cout<<"Before Swapping:"<<endl;
    cout<<"Smallest: "<<smallest<<endl;
    cout<<"Largest: "<<largest<<endl;
}

int main ()
{
    int arr[]= {1, 5, 9, 2, 6, 44, -64, 85};
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int size = sizeof(arr) / sizeof(int);
    min_max( arr, size, smallest, largest);
    swap(smallest, largest);
    cout<<"After Swapping:"<<endl;
    cout<<"Smallest: "<<smallest<<endl;
    cout<<"Largest: "<<largest<<endl;
}