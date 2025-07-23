# include <iostream>
using namespace std;

void num_reverse(int arr[], int size, int num)
{
    for (int i=size-1; i>=0; i--)
    {
        arr [i]= num%10;
        num /=10;
    }
}

int check_greatest_digit(int arr[], int size)
{
    int greatest_digit =arr[0];
    for (int i=1; i<size; i++)
    {
        if (arr[i]> greatest_digit)
        {
            greatest_digit=arr[i];
        }
    }
    return greatest_digit;
}

int main ()
{
    int num;
    int size =5;
    int arr[size];
    cout<<"Enter a number: "<<endl;
    cin>>num;
    num_reverse(arr, size, num);
    cout<<check_greatest_digit(arr, size);;
   
}