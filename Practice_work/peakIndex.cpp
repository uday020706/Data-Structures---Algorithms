# include <iostream>
# include <vector>
using namespace std;

int peakIndex(vector <int> vec)
{
    int size= vec.size();
    int st=1, end= size-2;
    while (st <= end)
    {
        int mid= st+ (end-st)/2;
        if (vec[mid-1] < vec[mid] && vec[mid] > vec[mid+1])
        {
            return mid;
        }
        if (vec[mid-1] < vec[mid])
        {
            st= mid+1;
        }
        else
        {
            end= mid-1;
        }
    }
    return -1;
}


int main ()
{
    vector <int> vec= {0,3,8,9,5,2};
    cout<<peakIndex(vec);
}