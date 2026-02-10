# include <iostream>
# include <vector>
using namespace std;

int maximumProfit( vector<int> prices)
{
    int size= prices.size ();
    int maxProfit= 0, bestBuy= prices[0];
    for (int i= 0; i<size; i++)
    {
        if(prices[i] > bestBuy)
        {
            maxProfit= max(maxProfit, prices[i] - bestBuy);
        }
        bestBuy= min(prices[i], bestBuy);
    }
    return maxProfit;
}

int main ()
{
    vector <int> prices= {7,1,5,3,6,4};
    cout<<maximumProfit(prices);
}