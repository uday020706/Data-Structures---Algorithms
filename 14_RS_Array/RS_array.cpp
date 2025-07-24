#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> vec, int target)
{
    int size = vec.size();
    int st = 0, end = size - 1;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (vec[mid] == target)
        {
            return mid;
        }
        if (vec[st] <= vec[mid]) // left half is sorted
        {
            if (vec[st] <= target && target <= vec[mid])
            {
                end = mid - 1;
            }
            else
            {
                st = mid + 1;
            }
        }

        else // right half is sorted
        {
            if (vec[mid] <= target && target <= vec[end])
            {
                st = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    return -1;
}
int main()
{
    vector<int> vec ={7, 8, 9, 1, 2, 3, 4};
    int target = 4;
    int result = binarySearch(vec, target);
    if (result != -1)
    {
        cout << "Element found at index: " << result << endl;
    }
    else
    {
        cout << "Element not found in the array." << endl;
    }
}