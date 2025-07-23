# include <iostream>
# include <vector>
using namespace std;
int pairSum( vector <int> vec, int target)
{
    int size= vec.size();
    for( int i=0; i<size; i++)
    {
        for ( int j= i+1; j<size; j++)
        {
            if (vec[j] + vec[i] == target)
            {
                cout<<"Pair found at indices "<<i <<" , "<<j;
                return 1;
            }
        }
    }
    return -1;
}


int main ()
{
    vector <int> vec= {2,7,11,15};
    int target= 17;
    int result= pairSum( vec, target);
    if (result== -1)
    {
        cout<<"No pair found.";
    }

}