#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maximumSum(vector<int> vec)
{
    int size = vec.size();
    int currSum = 0, maxSum = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        currSum += vec[i];
        maxSum= max(currSum, maxSum);
        if (currSum < 0)
        {
            currSum= 0;
        }
    }
    return maxSum;
}

int main()
{
    vector<int> vec = {3, -4, 5, 4, -1, 7, -8};
    cout<< maximumSum (vec);
    
}