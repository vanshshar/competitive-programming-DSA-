#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool printS(int ind , int sum , vector<int> &ds , int s , int arr[] , int n) {
    if(ind == n) {
        if(s == sum) {
            for(auto it : ds) cout<<it<<" ";
            cout<<endl;
            return true;
        } return false;
    }
    ds.push_back(arr[ind]);
    s += arr[ind];

    if(printS(ind + 1 , sum , ds , s , arr , n) == true) return true; //for picking up element 

    s -= arr[ind];
    ds.pop_back();

    if(printS(ind + 1 , sum , ds , s , arr , n) == true) return true; //for not picking 

    return false;
    //these both recursion is a sequence
}
int main() {
    int arr[] = {1,2,1};
    int n = 3;
    int sum = 2;
    vector<int> ds;
    printS(0 , sum , ds , 0 , arr , n);
    return 0;
}