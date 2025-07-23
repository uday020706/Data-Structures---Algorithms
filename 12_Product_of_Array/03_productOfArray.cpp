# include <iostream>
# include <vector>
using namespace std;

vector <int> product( vector <int> nums)
{
    int size= nums.size();
    vector <int> ans(size, 1);
    // to calculate prefix
    for (int i= 1; i<size; i++)
    {
        ans[i]= ans[i-1] * nums[i-1];
    }
    // to calculate suffix and final answer...
    int suffix=1;
    for (int i= size-2; i>=0; i--)
    {
        suffix *= nums[i+1];
        ans[i] *= suffix; 
    }
    return ans;
}
int main ()
{
    vector <int> nums= {1,2,3,4};
    vector <int> result= product(nums);
    for ( int val: result)
    {
        cout<<val<<" ";
    }
}