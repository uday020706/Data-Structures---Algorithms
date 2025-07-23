# include <iostream>
# include <vector>
using namespace std;

vector <int> product( vector <int> nums)
{
    int size= nums.size();
    vector <int> ans(size, 1);
    for (int i=0; i<size; i++)
    {
        for (int j=0; j<size; j++)
        {
            if (i != j)
            {
                ans[i] *= nums[j];
            }
        }
    }
    return ans;
}

int main ()
{
    vector <int> nums= {5,2,3,4}; 
    vector <int> result= product (nums);
    for (int val: result)
    {
        cout<< val <<" ";
    }
}
