// Majority element using sorting...

# include <iostream>
# include <vector>
# include <algorithm>
using namespace std;

int majorityElement (vector <int> vec)
{
    sort(vec.begin(), vec.end());
    int size= vec.size();
    int freq=1;
    for (int i=1; i<size; i++)
    {
        if (vec[i] == vec[i-1])
        {
            freq++;
        }
        else{
            freq=1;
        }
        if (freq > size/2)
        {
            return vec[i];
        }
    }
    return -1;
}

int main ()
{
    vector <int> vec= {1, 2, 2, 2, 1, 2, 2, 1, 1};
    int result= majorityElement( vec);
    if (result == -1)
    {
        cout<<"No majority element found.";
    }
    else
    cout<<"Majority element: " <<result;
}