# include <iostream>
# include <vector>
using namespace std;

int mostWater ( vector <int> height)
{
    int size= height.size();
    int width, ht,  area;
    int maxWater= 0;
    for (int i= 0; i<size; i++)
    {
        for (int j= i+1; j<size; j++)
        {
            ht = min (height[i] , height[j]);
            width= j-i;
            area= ht * width;
            maxWater= max( maxWater, area);
        }
    }
    return maxWater;
}
int main ()
{
    vector <int> height= {1,8,6,2,5,4,8,3,7};
    cout<<mostWater(height);
}