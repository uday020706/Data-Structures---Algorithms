//  push_back approach: Returns data (vector<int> ans) that can be reused later.

# include <iostream>
# include <vector>
using namespace std;

vector <int> pairSum( vector <int> vec, int target)
{
    vector <int> ans;
    int size= vec.size();
    for (int i=0; i<size; i++)
    {
        for (int j=i+1; j<size; j++)
        {
            if(vec[i] + vec[j] == target)
            {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}

int main ()
{
    vector <int> vec= {2, 7, 11, 8, 5, 15};
    int target= 13;
    vector <int> ans =pairSum( vec, target);
    cout<< "Pair found at indices: "<<ans[0]<<" and "<<ans[1] <<endl;
    cout<<"Values: " <<vec[ans[0]]<< " + " <<vec[ans[1]] <<" = "<<target <<endl;
}