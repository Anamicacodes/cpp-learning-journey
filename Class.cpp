//31 august 2026 
//an example of insertion sort : 
//print the absolute difference : minimum differnece between any two array elements  
#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr [8] = {7,2,6,14,33,19,43,9};
    int mindiff = INT_MAX;
    sort(arr,arr+8);
    for(int i=0;i<8;i++){
        int diff = abs (arr[i]- arr[i+1]);
        if (diff < mindiff)
            mindiff = diff;
    }
    cout << mindiff;
}