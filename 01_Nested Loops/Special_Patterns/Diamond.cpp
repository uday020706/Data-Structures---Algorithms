/*

   *
  ***
 *****
*******
 *****
  ***
   *


*/


# include <iostream>
using namespace std;
int main ()
{
    int n=4;

    // top part
    for (int i =0; i<n; i++)
    {
        for (int j =0; j<(n-i-1); j++)    // for spaces
        {
            cout<<" ";
        }   
        for (int j =0; j< (2*i+1); j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    // bottom part

    for (int i=0; i<n-1; i++)
    {
        for (int j=0; j< (i+1); j++)
        {
            cout<<" ";
        }
        for (int j=0; j< 2*(n-i-1)-1;j++)
        {
            cout<<"*";
        }cout<<endl;

    }


}