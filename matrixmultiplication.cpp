#include <bits/stdc++.h>
using namespace std;

void matrix_multiplication(int arr1[][2],int arr2[][2]){
    int N=2;
    int C[N][N];
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            C[i][j]=0;
            for(int k=0;k<N;k++){
                C[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }

    }

    for(int i=0;i<N;i++){
        cout<<endl;
        for(int j=0;j<N;j++){
            cout<<C[i][j]<<" ";
        }
    }
}

int main(){
    int arr1[2][2]={{1,2},{2,3}};
    int arr2[2][2]={{3,4},{4,5}};
    int N=2;
    matrix_multiplication(arr1,arr2);



    return 0;
}