#include<iostream>
using namespace std;
void check(int n)
{
    int i;

    if(n==1 || n==2) 
    {
        cout<<"prime"<<endl;
    }
    else
    {
        for(i=2;i<=(n-1);i++)//or i*i<=n
    {
        if(n%i==0)
        {
            cout<<"not prime"<<endl;
            break;
        }
    }
       if (i==n)
       {
           cout<<"prime"<<endl;
       }
}          
        
}
int main()
{
    check(2);
    check(5);
    check(1);
    check(4);
    check(13);
    check(27);
    check(88);
}