# include <iostream>
# include <vector>
using namespace std;

int majorityElement( vector <int> vec)
{
    int frequency=0, ans=0;
    int size= vec.size();
    for (int i=0; i<size; i++)
    {
        if (frequency == 0)
        {
            ans= vec[i];
        }
        if (ans== vec[i])
        {
            frequency++;
        }
        else{
            frequency--;
        }

    }
    return ans;
}

int main () {
    vector <int> vec= {1,2,2,1,2,2};
    cout<<majorityElement(vec);
}