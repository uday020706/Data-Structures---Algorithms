/*

*********
 *******
  *****
   ***
    *
   ***
  *****
 *******
*********

*/

# include <iostream>
using namespace std;
int main ()
{
    // top part
    int n=9;
    for (int i=0; i<n; i++)
    {
        // for spaces
        for ( int j=0; j< i; j++)
        {
            cout<<" ";
        }
        // for stars
        for ( int j=0; j<  2*(n-i-1)+1; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    // bottom part
    for (int i=0; i<n-1; i++)
    {
        // for spaces
        for (int j=0; j< (n-i-2); j++)
        {
            cout<<" ";
        }
        // for stars
        for (int j=0; j< 2*(i+1)+1; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    
    }
}
