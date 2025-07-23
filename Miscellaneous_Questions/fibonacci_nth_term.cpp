#include <iostream>
using namespace std;

void fibonacci(int num)
{
    int a = 0, b = 1;
    int sum = 0;
    for (int i = 1; i < num; i++)
    {
        int next = a + b;
        a = b;
        b = next;
    }
    cout << a << " ";
}

int main()
{
   fibonacci(1);
   fibonacci(2);
   fibonacci(3);
   fibonacci(4);
   fibonacci(5);
}
