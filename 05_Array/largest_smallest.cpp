# include <iostream>
# include <climits>    //included to use INT_MIN and INT_MAX
using namespace std;

int check (int arr[], int size, int smallest, int largest)
{
    for (int i=0; i<size; i++)
    {
        smallest= min( arr[i], smallest);
        largest= max(arr[i], largest);
    }
    cout<<"Smallest Number: " <<smallest <<endl;
    cout<<"Largest Number: " <<largest <<endl;
}

int main ()
{
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int arr[]= {4, 5, 24, -29, 0, 15, 85};
    int size= sizeof(arr) / sizeof(int);
    check(arr, size, smallest, largest);
}

