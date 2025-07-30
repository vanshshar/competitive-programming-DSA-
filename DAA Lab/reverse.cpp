#include<iostream>
#include <bits/stdc++.h>

using namespace std;


// int print(vector<int> largest) {
//     for(int i=0; i<largest.size(); i++) {
        
//     }
// }

int main() {
    vector<int> arr = {1,2,3,4,5};
    //reverse a array
    // reverse(arr.begin() , arr.end());
    // for(int i=0; i<arr.size(); i++) {
    //     cout<<arr[i]<<endl;
    // }

    //largest three element in the array
    int largest = arr[0];
    int secondLargest = 0;
    int thirdLargest = 0;
    for(int i=1; i<arr.size(); i++) {
        if(arr[i] > largest) {
            int temp = largest;
            int temp2 = secondLargest;
            largest = arr[i];
            secondLargest = temp;
            thirdLargest = temp2;
        }
    }
    cout<<largest<<" "<<secondLargest<<" "<<thirdLargest;
    return 0;
}