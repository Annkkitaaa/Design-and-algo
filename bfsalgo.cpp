#include <bits/stdc++.h>
using namespace std;

vector<int> BFS(int n,vector<int> adj[]){
    vector<int> vis(n,0);
    queue<int> qt;
    qt.push(1);
    vector<int> bfs;
    vis[1]=1;
    while(!qt.empty()){
        int node=qt.front();
        qt.pop();
        bfs.push_back(node);
        for(auto it: adj[node]){
            if(vis[it]!=1){
                vis[it]=1;
                qt.push(it);

            }
        }
    }
    return bfs;
}
void adjacencyList(int n,int m,vector<int> adj[]){
     cin.ignore();
    
    for(int i=0;i<m;i++){
        int u;
        int v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
   
}
int main(){
    int n;
    cout<<" Enter the number of nodes: ";
    cin>>n;
    int m;
    cout<<" number of edges : ";
    cin>>m;
    
    vector<int> adj[n + 1];
    adjacencyList(n, m, adj);
    vector<int> ans=BFS(n,adj);
for(auto it: ans){
    cout<<it;
}   
    return 0;
}