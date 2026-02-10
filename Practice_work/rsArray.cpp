#include <iostream>
#include <vector>
using namespace std;

int rsArray(vector<int> vec, int target)
{
    int size = vec.size();
    int mid, st=0, end=size-1;
    while (st <= end)
    {
        mid = st + (end - st) / 2;
        if (target == vec[mid])
        {
            return mid;
        }
        if (vec[st] <= vec[mid])
        {
            if (vec[st] <= target && target <=vec[mid])
            {
                end= mid-1;
            }
            else{
                st= mid+1;
            }
        }
        else{
            if (vec[mid] <= target && target <= vec[end])
            {
                st= mid+1;
            }
            else
            {
                end= mid-1;
            }
        }
    }
    return -1;
}

int main()
{
    vector<int> vec = {3, 4, 5, 6, 7, 0, 1, 2};
    int target= 1;
    cout << rsArray(vec, target);
}