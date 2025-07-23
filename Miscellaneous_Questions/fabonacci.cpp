#include <iostream>
using namespace std;

void fibonacci(int num)
{
    int a = 0, b = 1;
    int sum = 0;
    for (int i = 0; i < num; i++)
    {
        cout << a << " ";
        sum += a;
        int next = a + b;
        a = b;
        b = next;
    }
    cout << "= " << sum << endl;
}

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        fibonacci(i);
    }
}
