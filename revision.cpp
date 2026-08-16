//Binary search code for looking for a first greatest element :
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    int low =0 ;
    int high = n;
    int target = 500;
    int mid = (low + high)/2;
    int value = mid*mid + 4*mid + 7 ;
    while(low<high){
    if ( value > n){
        high = mid -1;
    }
    else {
        low =  mid +1;
    }
}
}
