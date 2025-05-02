#include<bits/stdc++.h>
using namespace std;
void Merge_Sort(vector<int>&arr , int n){
    

}
int main(){
    cout << "Enter the size of the array: ";
    int n;
    cin >> n;

    vector<int> arr(n);
    cout << "The array elements are : ";
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    cout << "Sorted array: ";
    Merge_Sort(arr,n);
    

}