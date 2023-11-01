#include <bits/stdc++.h>
using namespace std;

int main(){
    int A[]={2,34,4,5,6};
    int B[]={3,8,5,6,88};
    int n=sizeof(A)/sizeof(A[0]);
    int m=sizeof(B)/sizeof(B[0]);
    vector<int> C;
    for(int i=0;i<n;i++){
        C.push_back(A[i]);

    }
    for(int i=0;i<n;i++){
        C.push_back(B[i]);

    }

    sort(C.begin(),C.end());
    for(auto it: C){
        cout<<it<<" ";
    }
    return 0;
 }