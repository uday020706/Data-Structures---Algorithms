#include <iostream>
using namespace std;

int decimalToBinary(int decNum)
{
    int ans = 0, pow = 1, rem;
    while (decNum > 0)
    {
        rem = decNum % 2;
        decNum /= 2;
        ans += (rem * pow);
        pow *= 10;
    }
    return ans;
}

int main()
{
    int num;
    cout << "Enter a Number: " << endl;
    cin >> num;
    cout << decimalToBinary(num);
}

//   10  =  1010
