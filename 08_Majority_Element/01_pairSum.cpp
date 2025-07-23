# include <iostream>
# include <vector>
using namespace std;

int pairSum( vector <int> vec, int target)
{
    int size= vec.size();
    for (int st=0; st<size; st++)
    {
        for (int end=st+1; end<size; end++)
        {
            if (vec[st] + vec[end] == target)
            {
               cout<<"Pair found at indices: " <<st <<" and " <<end;
               return 1;
            }
        }
    }
    return -1;
}

int main ()
{
    vector <int> vec= {2, 7, 11, 15};
    int target= 13;
    int result= pairSum(vec, target);
    if (result==-1)
    {
        cout<<"No pair found!";
    }

}