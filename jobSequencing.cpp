#include <bits/stdc++.h>
using namespace std;

vector<int> jobSequenc(vector<int> & Profit, vector <int> &Deadline)
{
     int n = Profit.size();

     vector <int> idx(n);
     for(int i = 0; i < n; i++) idx[i] = i;
     sort(idx.begin(), idx.end(), [&](int a, int b))
     {
          return Profit[a] > Profit[b];
     }

     int maxDeadline = *max_element(Deadline.begin(), Deadline.end());

     vector <int> slot (maxDeadline, -1);
      for(int i = 0; i < n; i++)
      {
          int job = 
      }



}

int main()
{
     vector<int>Profit = { 100, 19, 27, 25,15};
     vector<int> Deadlines = { 2, 1, 2, 1,1};

     vector<int> ans = jobSequence(Profit,Deadline);

     for(auto u : ans)
     cout << u << " ";
     cout << endl;

}
