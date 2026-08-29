#include <iostream>
using namespace std;
int main(){
    int arr[10] = {2,4,1,7,6,5,4,3,9,2};
    for(int i = 1; i<10;i++){
        arr[i] = arr[i] + arr[i-1];
    }
    int right;
    int left;
    cin >> right;
    cin >> left;
    int sum= arr[right] - arr[left - 1];
    cout << sum;
}