# include <iostream>
# include <vector>
using namespace std;

int peakIndex (vector <int> nums)
{
    int size= nums.size();
    int st= 1, end= size-2;
    while (st <= end) {
        int mid= st + (end-st)/2;
        if (nums[mid-1] < nums[mid] && nums[mid] > nums[mid+1])
        {
            return mid;
        }
        if (nums[mid-1] < nums[mid])  // increasing side and search in right space.
        {
            st= mid+1;
        }
        else  // decreasing side and search in left space.
        {
            end= mid-1;
        }
    }
    return -1;
}
int main () 
{
    vector <int> nums= {0, 3, 8, 9, 5, 2};
    int result= peakIndex(nums);
    cout<<"Peak index is:  "<< result;
}