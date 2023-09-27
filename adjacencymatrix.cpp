#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adjacencyMatrix(vector<pair<int, int>> mat, int n) {
    vector<vector<int>> Matrix(n, vector<int>(n, 0));
     for (const pair<int, int>& edge : mat) {
        int u = edge.first;
        int v = edge.second;
        Matrix[u][v] = 1;
    }
    return Matrix;
}


int main(){
    int n;
    cout<<"enter the number of nodes: ";
    cin>>n;
    int m;
    cout<<"enter the number of connections: ";
    cin>>m;
    vector<pair<int,int>> edges;
    for(int i=0;i<m;i++){
        int u,v;
        cout<<"enter the node u: ";
        cin>>u;
        cout<<"enter the node to which it is connected";
        cin>>v;
        edges.push_back({u,v});
        }

   vector<vector<int>> ans=adjacencyMatrix(edges,n);
   for(auto it: ans){
    for( auto it1: it){
        cout<<it1<<" " ;

    }
    cout<<endl;
   }
   return 0;

}