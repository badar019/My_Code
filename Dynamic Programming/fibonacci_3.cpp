/* This c++ program intends to compute nth fibonacci (space optimization)
*/
#include<bits/stdc++.h>
using namespace std;


int fib(int n){
    vector<int> dp;
    int t1=0,t2=1,temp;
    if( n == 1 ) return 0;
    for(int i=2;i<=n;i++){
        temp=t1+t2;
        t1=t2;
        t2=temp;
    }
    return t2;
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