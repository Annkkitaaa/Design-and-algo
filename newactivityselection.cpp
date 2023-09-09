#include <bits/stdc++.h>
using namespace std;
//s array of start time,f array of all the finish time
void activityselected(int s[],int f[],int n){
    //first activity always selected

    
    int i=0;
    cout<<i<<" ";
    for(int j=1;j<n;j++){
        if(s[j]>=f[i]){
            cout<<j<<" ";
            i=j;
        }
    }
}


 
// Driver code
int main()
{
   int s[100],f[100],n;
   cout<<"enter the total number of activities";
   cin>>n;
   cout<<" enter the start time of all the "<<n<<" activities";
   for(int i=0;i<n;i++){
    cin>>s[i];
   }
   cout<<" enter the finish time of all the "<<n<<" activities";
   for(int i=0;i<n;i++){
    cin>>f[i];
   }
   activityselected(s,f,n);


    return 0;
}