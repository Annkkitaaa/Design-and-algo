#include <bits/stdc++.h>
using namespace std;

bool compareByTValueDesc(const std::pair<int, int>& a, const std::pair<int, int>& b) {
    // Calculate t[i] values for both pairs and compare them in descending order
    return (a.first * 1.0 / a.second) > (b.first * 1.0 / b.second);
}

void knapsack(vector<pair<int,int>> &p,int n,int N){
    sort(p.begin(),p.end(),compareByTValueDesc);
    vector<bool> picked(n, false);

    //&pair: This gets the memory address of the pair object. In C++, you can use the address-of operator (&) to obtain a pointer to an object.
    //&p[0]: This gets the memory address of the first element (p[0]) in the vector p. It's essentially the address of the first pair in the vector.
    //&pair - &p[0]: This subtraction calculates the offset or index of the pair within the vector p. It's the difference between the memory address 
    //of the current pair and the memory address of the first pair in the vector. This index tells you where in the vector the pair is located.
    //picked[&pair - &p[0]]: This uses the calculated index to access the corresponding element in the picked vector. picked is typically a boolean 
    //vector where each element represents whether the corresponding pair in the p vector has been picked (true) or not picked (false).
    
    while(N>0){
    for (const auto& pair : p) {
        if (!picked[&pair - &p[0]] && N >=pair.second) {
            cout << "(" << pair.first << "," << pair.second << ")";
            N -= pair.second;
            picked[&pair - &p[0]] = true; // Mark the pair as picked
        }
    }}
    

}



 
// Driver code
int main()
{ 
    int N;
    cout<<"enter the total weight to be picked";
    cin>>N;
    int n;
  cout<<"Enter the number of pairs : ";
  cin>>n;
  vector<pair<int,int>> p;
 for(int i=0;i<n;i++){
    int firstValue;
    int secondValue;
    cout<<"enter the input profit for pair "<<i+1<<endl;
    cin>>firstValue;
    cout<<"enter the input weight for pair "<<i+1<<endl;
    cin>>secondValue;

    p.push_back(make_pair(firstValue,secondValue));
    
 }

 knapsack(p,n,N);
  



    return 0;
}