#include<bits/stdc++.h>
using namespace std;

bool profitByWeight(const vector<int>&a, const vector<int>&b)
{
    double r1 = (double)a[0] / a[1];
    double r2 = (double)b[0] / b[1];
    return r1>r2;
}

double fractionalKnapsack(vector<int> &Profit, vector<int> &Weight, int Capacity)
{
    int n = Profit.size();

    vector<vector<int>> items(n,vector<int>(2));

    for(int i = 0; i < n; i++)
    {
        items[i][0] = Profit[i];
        items[i][1] = Weight[i];
    }
    sort(items.begin(), items.end(), profitByWeight);

    double totalValue = 0.0;
    int remaining = Capacity;

    for(int i = 0; i < n; i++)
    {
        int itemProfit = items[i][0];
        int itemWeight = items[i][1];

        if(itemWeight <= remaining)
        {
            totalValue += itemProfit;
            remaining -= itemWeight;
        }
        else 
        {
            double ratio = (double)itemProfit/itemWeight;
            totalValue = ratio * remaining;
            break;
        }
    }
    return totalValue;


}


int main()
{
    vector<int> Profit = {10,20,30};
    vector<int> Weight = {2,3,4};
    int Capacity = 30;
    int totalProfit = fractionalKnapsack(Profit,Weight,Capacity);
    cout << "Total Profit : " << totalProfit << endl;


}