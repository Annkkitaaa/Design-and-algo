#include <bits/stdc++.h>
using namespace std;

int main(){
    int A[]={2,5,3,5,88};
    int B[]={3,8,5,6,88,91};
    int n=sizeof(A)/sizeof(A[0]);
    int m=sizeof(B)/sizeof(B[0]);
    set<int> C;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(A[i]==B[j]){
                C.insert(A[i]);
            }
        }
    }

    for(auto it: C){
        cout<<it<<" ";
    }
    return 0;
 }