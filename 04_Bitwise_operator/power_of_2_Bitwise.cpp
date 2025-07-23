# include <iostream>
using namespace std;

int power_of_2( int num)
{
    if (num<=0)
    return 0;
    
    if ((num & (num-1))==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if (power_of_2(num))
    {
        cout<<"yes";
    }
    else{
        cout<<"No";
    }
}