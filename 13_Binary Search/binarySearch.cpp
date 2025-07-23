# include <iostream>
# include <vector>
using namespace std;

int binarySearch( vector <int> vec, int target)
{
    int size= vec.size();
    int st=0, end= size-1;
    while (st<=end)
    {
        int mid= st + (end - st)/2;
        if (target > vec[mid])
        {
            st= mid+1;
        }
        else if (target < vec[mid]) 
        
        {
            end= mid-1;
        }
        else
        {
            return mid;
        }
    } 
    return -1;

}

int main ()
{
    vector <int> vec= {-1,0,3,5,8,12};
    int target= 5;  
    int result= binarySearch(vec, target);
    if (result==-1)
    {
        cout<<"No element found!";
    }
    else
    {
        cout<<"Element found at index "<<result;
    }

}