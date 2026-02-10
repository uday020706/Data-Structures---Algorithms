# include <iostream>
# include <vector>
# include <climits>
using namespace std;

int mostWater( vector <int> height)
{
    int size= height.size();
    int maxWater=0;
     int ht, wd, area, lP=0, rP= size-1;
    while (lP < rP)
    {
        ht= min(height[lP], height[rP]);
        wd= rP -lP;
        area= ht*wd;
        maxWater= max(maxWater, area);
        if (height[lP] < height[rP])
        {
            lP++;
        }
        else{
            rP--;
        }
    }
    return maxWater;

}
int main ()
{
    vector <int> height= {1,8,6,2,5,4,8,3,7};
    cout<<mostWater(height);
}