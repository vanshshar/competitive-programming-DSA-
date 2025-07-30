// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n; cin>>n;
    vector<int> a(n);
    // for(int i= 0; i<n; i++) {
    //     cin>>a[i];
    // }
    a.push_back(20);
    for(int i=0; i<a.size(); i++) {
        cout<<a[i]<<" ";
    }

    return 0;
}