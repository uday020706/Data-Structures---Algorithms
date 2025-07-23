/* 
Prime no. conditions
i<=sqrt(num)
i*i <=(num)
i<=(num-1)
*/

# include <iostream>
# include <cmath>
using namespace std;

bool check_prime(int num)
{
    if (num<=1)
    {
        return false;
    }
    //for (int i=2; i<=sqrt(num); i++)
    for (int i=2; i*i <(num); i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main ()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if (check_prime(num))
    {
        cout<<"Yes";
    }
    else
    cout<<"No";
    
}

