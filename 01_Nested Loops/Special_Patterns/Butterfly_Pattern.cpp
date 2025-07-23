/*

*      *
**    **
***  ***
********
********
***  ***
**    **
*      *

*/

# include <iostream>
using namespace std;
int main ()
{
    int n=4;
    // top part
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<i+1; j++)   // for stars
        {
            cout<<"*";
        }
        for (int j=0; j<2*(n-i-1); j++)   // for spaces
        {
            cout<<" ";
        }
         for (int j=0; j<i+1; j++)    // for stars
        {
            cout<<"*";
        }
        cout<<endl;
    }


    for(int i=0; i<n; i++)
    {
        for (int j=0; j< n-i; j++)  // for stars
        {
            cout<<"*";
        }
        for (int j=0; j< 2*i; j++)
        {
            cout<<" ";    // for spaces
        }
        for (int j=0; j< n-i; j++)  // for stars
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
}