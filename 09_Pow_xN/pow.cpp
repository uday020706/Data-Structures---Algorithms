/*
pow(3, 4)
| Step | Binary `exponent` | `exponent % 2` (LSB) | Action                 | `ans`     | `base`  | `exponent` |
| ---- | ----------------- | -------------------- | ---------------------- | --------- | ------- | ---------- |
| Init | `100`             | -                    | Start                  | 1         | 3       | 4          |
| 1    | `100`             | 0                    | Skip multiply          | 1         | 3² = 9  | 2 (`10`)   |
| 2    | `10`              | 0                    | Skip multiply again    | 1         | 9² = 81 | 1 (`1`)    |
| 3    | `1`               | 1                    | Multiply: ans \*= base | 1×81 = 81 | 6561    | 0 (`0`)    |
 
*/

# include <iostream>
using namespace std;

int pow( int base, int expo)
{
    int ans= 1;
    while (expo>0)
    {
        if (expo % 2==1)
        {
            ans *=base;
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
    cout<<"Enter the exponent: ";
    cin>>expo;
    result= pow (base, expo);
    cout<<result;
}