/*
A B C D 
E F G H
I J K L
M N O P
*/

# include <iostream>
using namespace std;
int main ()
{
    int n=4;
    char ch='A';    // declared before loop to print new value in each line.
    for (int i =0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            cout<<ch <<" ";
            ch++;
        }
        cout<<endl;
    }
}