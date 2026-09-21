//Check whether if it is possible to rotate arr and make them sorted 
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[8] = {4,5,6,7,8,1,2,3};
    int count =0 ;
    for(int i=0; i<n-1; i++) {
        if(arr[i] > arr[i+1]){
            count++;       //If array is unsorted it gets increased
        }
    }  
    if (count ==0) cout << true;     //can rotate 0 times
    else if (count == 1 and arr[0] > arr[n-1]) cout << true;     //can rotate 1 time
    else false;


}