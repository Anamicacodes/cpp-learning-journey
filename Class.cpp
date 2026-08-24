//find the maximum sum subarray 
//ans is 8 in this case : 
#include <iostream>
using namespace std;
int main(){
    int arr[11] = {1,2,-4,6,1,-5,4,2,-7,-9,4};
    int temp =1, sum =0    ;
    for(int i=1; i<11;i++){
        if (arr[i] > arr[i-1]){
            temp++;
            ans = max(temp,ans);
        }
        else 
            temp =1;
    }
    cout << ans ;
}