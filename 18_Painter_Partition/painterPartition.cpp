#include <iostream>
#include <vector>
using namespace std;
bool isPossible(vector<int> timeUnit, int tiles, int painters, int mid)
{
    int painter = 1, time = 0;
    for (int i = 0; i < tiles; i++)
    {
        if (timeUnit[i] > mid)
        {
            return false;
        }

        if (time + timeUnit[i] <= mid)
        {
            time = time + timeUnit[i];
        }
        else
        {
            painter++;
            time = timeUnit[i];
        }
    }
    return painter > painters ? false : true;
}
int painterPartition(vector<int> timeUnit, int tiles, int painters)
{
    int sum = 0, ans = -1;
    for (int i = 0; i < tiles; i++)
    {
        sum += timeUnit[i];
    }
    int st = timeUnit[0], end = sum;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (isPossible(timeUnit, tiles, painters, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            st = mid + 1;
        }
    }
    return ans;
}
int main()
{
    vector<int> timeUnit;
    int tiles, painters, a, result;
    cout << "Enter the number of tiles: ";
    cin >> tiles;
    cout << "Enter the number of painters: ";
    cin >> painters;
    cout << "Enter the duration to paint each tile respectively: ";
    for (int i = 0; i < tiles; i++)
    {
        cin >> a;
        timeUnit.push_back(a);
    }
    result = painterPartition(timeUnit, tiles, painters);
    cout << result;
    return 0;
}