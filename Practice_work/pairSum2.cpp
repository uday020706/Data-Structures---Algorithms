# include <iostream>
# include <vector>
using namespace std;

vector <int> pairSum (vector <int> vec, int target)
{
    vector <int> ans;
    int size= vec.size();
    for (int i=0; i<size; i++)
    {
        for (int j=0; j<size; j++)
        {
            if (vec[i] + vec[j] ==target)
            {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}
int main ()
{
    vector <int> vec= {2,7,11,15};
    int target= 9;
    vector <int> result= pairSum( vec, target);
    cout<<"Pair found at indices: "<<result[0] <<" and "<<result[1];
}