/*
1 2 3 
4 5 6
7 8 9 
*/




# include <iostream>
using namespace std;
int main ()
{
    int n=3;
    int num=1;    // declared before loop to update value of num after each line.
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            cout<<num <<" ";
            num++;
        }
        cout<<endl;
    }
}