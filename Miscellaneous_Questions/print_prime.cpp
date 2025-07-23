# include <iostream>
using namespace std;

int primeNo(int num)
{
    for (int i=2; i<num; i++)
    {
        if (num%i !=0)
        {
            cout<<i;
        }
    }
}

int main()
{
    int num;
    cout<<"Enter: ";
    cin>>num;
    cout<<primeNo(num);
}