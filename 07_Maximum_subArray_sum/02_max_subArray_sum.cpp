# include <iostream>
# include <vector>
# include <climits>
using namespace std;

void subArray_sum(vector <int> vec, int size)
{
   int maxSum= INT_MIN;
   int startIdx=0, endIdx=0;
    for (int st=0; st<size; st++)
    {
        int currSum=0; 
        for (int end=st; end<size; end++)
        {
            currSum += vec[end];
            
            if (currSum> maxSum)
            {
                maxSum= currSum;
                startIdx= st;
                endIdx= end;
            }
            
        }
    }
    cout<<"Maximum subarray sum= "<<maxSum<<endl<<endl;
    cout<<"Index: "<<startIdx <<" to " <<endIdx <<"= ";
    for (int i=startIdx; i<=endIdx; i++)
    {
        cout<<vec[i];
    }
}

int main()
{
    vector<int> vec= {1, -3, -4, 4, 5, 2, -1};
    int size= vec.size();
    subArray_sum(vec, size);
}