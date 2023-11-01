#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={1,4,2,3,5,6,99};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    cout<<" max element is: "<< arr[n-1];
    cout<<"second max element is: "<< arr[n-2];
    return 0;
}