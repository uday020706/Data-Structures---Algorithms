#include <iostream>
using namespace std;

int power_of_two(int num)
{
    if (num <= 0) return 0;

    while (num > 1)
    {
        if (num % 2 != 0)
            return 0;
        num = num / 2;
    }

    return 1;
}

int main()
{
    int num = 22;

    if (power_of_two(num))
        cout << num << " is a power of two." << endl;
    else
        cout << num << " is NOT a power of two." << endl;

    return 0;
}
