# include <iostream>
using namespace std;

void check( int num)
{
    if ((num&1) ==0 )
    {
        cout<<"Even number.";
    }
    else
    {
        cout<<"Odd number.";
    }
}
int main ()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    check(num);
}