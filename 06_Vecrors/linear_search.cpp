# include <iostream>
# include <vector>
using namespace std;

void linear_search(vector <int> vec, int size, int target)
{
    for (int i=0; i<size; i++)
    {
        if (vec[i]==target)
        {
            cout<<"Element found: "<<i;
            return;
        }
    }
    cout<<"Element not found!";
}
int main ()
{
    int size;
    int target= 24;
    vector <int> vec = {1, 2, 3, 4, 5, 7, 24, 8, 6};
    size=vec.size();
    linear_search(vec, size, target);
}