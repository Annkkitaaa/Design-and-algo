#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> V={1,3,4,2,34,4};
    int x=4;
    int k=2;
    for(int i=V.size()-1;i>=k;i--){
        V[i]=V[i-1];
        
        
    }

    V[k-1]=x;

    for (int i = 0; i < V.size(); i++)
       cout<<V[i]<<" ";
    cout<<endl;
 
    return 0;
}