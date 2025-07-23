# include <iostream>
# include <vector>
using namespace std;

int majorityElement( vector <int> vec)
{
    int size= vec.size();
    for (int st=0; st<size; st++)
    {
        int freq=1;
        for (int end= st+1; end<size; end++)
        {
            if (vec[end] == vec[st])
            {
                freq ++;
            }
        }
         if ( freq > size/2)
    {
       return vec[st];
    }
    }
    return -1;
}

int main ()
{
    vector <int> vec= {1, 2, 2, 2, 2, 1};
    int result=majorityElement(vec);
    if (result == -1)
    {
        cout<<"No majority element is found!";
    }
    else
    cout<<"The majority element is " <<result;
}