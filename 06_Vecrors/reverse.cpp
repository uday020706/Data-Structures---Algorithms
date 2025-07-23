# include <iostream>
# include <vector>
using namespace std;

void reverse(vector <int> &vec, int size)
{
    int start =0, end= size-1;
    while (start < end)
    {
        swap (vec[start], vec[end]);
        start++;
        end--;
    }
}
int main ()
{
    int size;
    vector <int> vec = {1, 2, 3, 4, 5, 7, 24, 8, 6};
    size=vec.size();
    reverse(vec, size);

    for (int i=0; i<size; i++)
    {
        cout<<vec[i]<<" ";
    }
}