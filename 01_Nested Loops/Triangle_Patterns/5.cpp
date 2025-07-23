/*

A 
B A
C B A
D C B A

*/


# include <iostream>
using namespace std;
int main()
{
    int n=4;
    char ch ='A';
    for (int i=0; i<n; i++)
    {
        for (char ch=i+'A'; ch>='A'; ch--)
        {
            cout<<ch<< " ";
    // ch++;
        }
        cout<<endl;
    }
}