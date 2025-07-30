#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int printS(int ind , int sum , int s , int arr[] , int n) {
    if(ind == n) {
        if(s == sum) return 1;
        else return 0;
    }
    s += arr[ind];

    int l = printS(ind + 1 , sum , s , arr , n); //for picking up element 

    s -= arr[ind];

    int r = printS(ind + 1 , sum , s , arr , n); //for not picking 

    return l + r;
    //these both recursion is a sequence
}
int main() {
    int arr[] = {1,2,1};
    int n = 3;
    int sum = 2;
    cout<<printS(0 , sum , 0 , arr , n);
    return 0;
}