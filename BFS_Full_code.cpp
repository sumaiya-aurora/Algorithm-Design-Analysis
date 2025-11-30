#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> adj[n+1];

    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int src = 1;
    queue<int> q;
    int level[n+1];
    int visited[n+1] = {0};

    level[src] = 0;
    q.push(src);
    visited[src] = 1;
    
    while(!q.empty()){
        int u = q.front();
        q.pop();

        for(int v: adj[u]){
            if(visited[v]) continue;

            q.push(v);
            level[v] = level[u]+1;
            visited[v] = 1;
        }
    }

    bool is_tree = (m==n-1);

    for(int i = 1; i <= n; i++){
        if(visited[i]==0){
            is_tree = false;
            break;
        }
    }
    
    if(is_tree){
        cout << "Tree\n";
    }
    else {
        cout << "Not a Tree\n";
    }

    return 0;
}