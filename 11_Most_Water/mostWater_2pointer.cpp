# include <iostream>
# include <vector>
using namespace std;

int mostWater( vector <int> height)
{
    int size= height.size ();
    int maxWater=0;
    int  ht, width, area, lp= 0, rp= size-1;
    while (lp < rp)
    {
        ht= min(height[lp], height[rp]);
        width= rp - lp;
        area= ht*width;
        maxWater= max(maxWater, area);
       if (height[lp] < height[rp])
            lp++;
        else
            rp--;
    }
    return maxWater;
}

int main ()
{
    vector <int> height= {1,8,6,2,5,4,8,3,7};
    cout<<mostWater( height);
}