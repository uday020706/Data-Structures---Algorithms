# include <iostream>
# include <vector>
# include <climits>
using namespace std;

int max_subArray_sum(vector <int> arr)
{
    int size=arr.size();
    int currSum = 0, maxSum = INT_MIN;
    for ( int i=0; i<size; i++)
    {
        currSum += arr[i];
        maxSum= max (currSum, maxSum);
        if (currSum<0)
        {
            currSum=0;
        }
    }
    return maxSum;
}

int main ()
{
    vector <int> arr= {3, -4, 5, 4, -1, 7, -8};
    cout<<"Maximum sub array sum: "<<max_subArray_sum(arr);
}