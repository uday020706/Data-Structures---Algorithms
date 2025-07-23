# include <iostream>
# include <vector>
using namespace std;

int pow (int base, int expo)
{
    int ans=1;
    while (expo>0)
    {
        if (expo %2 == 1)
        {
            ans *= base;
        }
            base *= base;
            expo /= 2;
    }
    return ans;
}

int main ()
{
    int base, expo, result;
    cout<<"Enter the base: ";
    cin>>base;
    cout<<"Enter the exponent ";
    cin>>expo;
    result= pow(base, expo);
    cout<<result;
}