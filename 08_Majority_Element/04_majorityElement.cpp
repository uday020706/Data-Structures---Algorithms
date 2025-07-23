# include <iostream>
# include <vector>
using namespace std;

int majorityElement( vector <int> vec)
{
    int size= vec.size();
    for ( int val: vec)
    {
        int freq=0;
        for ( int el: vec)
        {
            if  (el == val)
            {
                freq++;
            }
        }
        if (freq > size/2)
        {
            return val;
        }
    }
    return -1;
}

int main ()
{
    vector <int> vec= {1, 2, 2, 1, 2, 1, 1};
    int result= majorityElement(vec);
    if (result == -1)
    {
        cout<<"No majority element is found!";
    }
    else
    cout<<"The majority element is " <<result;
}