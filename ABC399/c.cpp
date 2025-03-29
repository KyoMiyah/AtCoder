#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> adj; 
vector<bool> visited;
int nodeCount, edgeCount;

void dfs(int v) {
    visited[v] = true;
    nodeCount++;  
    for (int u : adj[v]) {
        edgeCount++;  
        if (!visited[u]) {
            dfs(u);
        }
    }
}

int main() {
    int N, M;
    cin >> N >> M;

    adj.resize(N);
    visited.assign(N, false);

    for (int i = 0; i < M; i++) {
        int u, v;
        cin >> u >> v;
        u--; v--;  
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int extraEdges = 0;
    
    for (int i = 0; i < N; i++) {
        if (!visited[i]) {
            nodeCount = 0;
            edgeCount = 0;
            dfs(i);
            edgeCount /= 2; 
            extraEdges += (edgeCount - (nodeCount - 1));
        }
    }

    cout << extraEdges << endl;
    return 0;
}