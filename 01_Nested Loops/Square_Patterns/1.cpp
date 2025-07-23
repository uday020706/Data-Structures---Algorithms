/*
1234
1234
1234
1234
*/



# include <iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    for (int i=0; i<n; i++)
    {
        int num = 1;    // declared inside loop so that print same value after each line.
        for (int j=0; j<n; j++)
        {
            cout<<num <<" ";
            num++;
            
        }
        cout<<endl;
    }
}