/* This c++ program intends to compute nth fibonacci using memoization(Top-down 
dynamic programming)
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> dp;
int fib(int n){
    if (n == 0) return 0; //dp[0]=0
    if (n == 1) return 1; // dp[1]=1
    if(dp[n]!=-1){
        return dp[n]; //this condition to avoid overlapping
    }
    return dp[n]=fib(n-1)+fib(n-2);
}
int main(){
    cout << "Enter a number: " ;
    int n;
    cin >> n;
    dp.resize(n+1,-1); 
    cout << fib(n) << endl;
}