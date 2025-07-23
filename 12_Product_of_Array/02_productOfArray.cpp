# include <iostream>
# include <vector>
using namespace std;

vector <int> product( vector <int> nums)
{
    int size= nums.size();
    vector <int> ans(size, 1);
    vector <int> prefix(size, 1);
    vector <int> suffix(size, 1);
    // to calculate prefix
    for (int i= 1; i< size; i++)
    {
        prefix[i]= prefix[i-1] * nums[i-1];
    }
    // to calculate suffix
    for (int i=size-2; i>=0; i--)
    {
        suffix[i]= suffix[i+1] * nums[i+1];
    }
    // to calculate final answer
    for (int i =0; i< size; i++)
    {
        ans[i]= prefix[i] * suffix[i];
    }
    return ans;
}
int main ()
{
    vector <int> nums= {1,2,3,4};
    vector <int> result= product (nums);
    for (int val: result)
    {
        cout<<val <<" ";
    }
}