#include <iostream>
#include <vector>
using namespace std;
int singleElement(vector<int> vec)
{
    int size = vec.size();
    int st = 0, end = size - 1, mid;
    if (size == 1)
    {
        return vec[0];
    }
    while (st <= end)
    {
        mid = st + (end - st) / 2;
        if (mid == 0 && vec[0] != vec[1])
        {
            return mid;
        }
        if (mid == size - 1 && vec[size - 1] != vec[size - 2])
        {
            return mid;
        }
        if (vec[mid - 1] != vec[mid] && vec[mid] != vec[mid + 1])
        {
            return mid;
        }
        if (mid % 2 == 0)
        {
            if (vec[mid - 1] == vec[mid])
            {
                end = mid - 1;
            }
            else
            {
                st = mid + 1;
            }
        }
        else
        {
            if (vec[mid - 1] == vec[mid])
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
    vector<int> vec = {1, 1, 2, 2, 4, 7, 7};
    cout << singleElement(vec);
}


  