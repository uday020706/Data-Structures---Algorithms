#include <iostream>
#include <vector>
using namespace std;
void sorting(vector<int> &nums, int size)
{
    int low = 0, mid = 0, high = size - 1;
    while (mid <= high)
    {
        if (nums[mid] == 0)
        {
            swap(nums[low], nums[mid]);
            low++;
            mid++;
        }
        else if (nums[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(nums[high], nums[mid]);
            high--;
        }
    }
}
 void print(vector<int> &nums, int size)
    {
        for (int i = 0; i < size; i++)
        {
            cout << nums[i] << " ";
        }
    }

int main()
{
    vector<int> nums = {2, 0, 2, 1, 1, 0};
    int size = nums.size();
    sorting(nums, size);
    print(nums, size);
    return 0;
}