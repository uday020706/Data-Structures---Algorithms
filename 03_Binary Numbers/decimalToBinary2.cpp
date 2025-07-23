# include <iostream>
# include <vector>
using namespace std;

int decimalToBinary( int num)
{
    vector <int> binary;
    while (num>0)
    {
        binary.push_back( num % 2);
        num /= 2;
    }
    // digits are stored in reverse order.
    for (int i= binary.size()-1; i>=0; i--) // to print correct order: loop start from last index thats why it is binary.size()-1
    {
        cout<<binary[i];
    }
}
int main ()
{
    int num, result;
    cout<<"Enter a number:";
    cin>>num;
    result= decimalToBinary(num);
}