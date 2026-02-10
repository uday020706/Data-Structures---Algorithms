#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maximumSum(vector<int> vec, int size)
{
    int currSum = 0, maxSum = INT_MIN;
int st=0, end=0, tempSt=0;

    for (int i = 0; i < size; i++)
    {
        currSum += vec[i];
        tempSt=vec[i];
        st=tempSt;
        end=i;
        maxSum = max(currSum, maxSum);
        if (currSum < 0)
        {
            currSum = 0;
        }
    }
    return maxSum;
}

int main()
{
    vector<int> vec = {3, -4, 5, 4, -1, 7, -8};
    int size = vec.size();
    cout << maximumSum(vec, size);
}