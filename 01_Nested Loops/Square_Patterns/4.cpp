/*
A B C D
A B C D
A B C D
A B C D
*/

# include <iostream>
using namespace std;
int main ()
{
    int n=4;
    for (int i=0; i<n; i++)
    {
        char ch = 'A';     // declared inside loop to print same initial value in each line.
        for (int j=0; j<n; j++)
        {
            cout<<ch <<" ";
            ch++;
        }
        cout<<endl;
    }
}