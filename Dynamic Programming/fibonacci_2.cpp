/* This c++ program intends to compute nth fibonacci using memoization(Top-down 
dynamic programming)
*/
#include<bits/stdc++.h>
using namespace std;
int fib(vector<int>&dp ,int n){
    if (n <=1) return dp[n]=n; //
    if(dp[n]!=-1){
        return dp[n]; //this condition to avoid overlapping
    }
    return dp[n]=fib(dp,n-1)+fib(dp,n-2);
}
int main(){
    cout << "Enter a number: " ;
    int n;
    cin >> n;
     
    vector<int> dp(n+1,-1);
    cout << fib(dp,n) << endl;
}