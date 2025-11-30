#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;

    /* int adj[n+1][n+1];
    memset(adj, 0, [n+1]);

    for(int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u][v] = 1;
        adj[v][u] = 1;

    }
*/
///Using list

vector<int> adj[n + 1];

 for(int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);

    }

    for(int i = 1; i <=n; i++)
    {
        cout << i << ": ";
        for(int v : adj[i])
        {
            cout << v << " ";
        }
        cout << endl;
    }
}

for weigthed graph

vector <pair<int,int>> adj[n+1];
for(int i = 0; i < m; i++)
    {
        int u, v,w;
        cin >> u >> v>> w;

       
         adj[u].push_back({v,w}); 
         adj[v].push_back({u,w});
       

    }

    for(int i = 1; i <=n; i++)
    {
        cout << i << ": ";
        for(int v : adj[i])
        {
            cout  << "( "<< v.first << v.second << ")"<< endl;
        }
        cout << endl;
    }