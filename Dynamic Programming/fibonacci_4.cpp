/* This c++ program intends to compute nth fibonacci using Tabulation(Bottom-up
dynamic programming)
*/
#include<bits/stdc++.h>
using namespace std;
int fib(int n){
    vector<int> dp(n+1,0);
    dp[0]=0;
    dp[1]=1;
    for(int i=2;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];
}
int main(){
    int n;
    do {
    cout << "Enter a number: " ;
    cin >> n;
    if(n<0)break;
    cout <<"Fibonacci of " << n << " is " << fib(n) << endl;
    }
    while(true);
    
}