/*
AAAA
 BBB
  CC
   D
*/

# include <iostream>
using namespace std;
int main ()
{
    int n=4;
    char ch='A';
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<i; j++)   //spaces
        {
            cout<<" ";
        }
        for (int j=0; j<n-i; j++)   //no. of characters in each row
        {
            cout<<ch;
        }
        cout<<endl;
        ch++;
    }
}
