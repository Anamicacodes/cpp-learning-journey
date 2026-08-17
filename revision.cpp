/*//finding the peak element compared to surrounding elements using binary search :
#include <iostream>
using namespace std;
int main(){
    int start =0;
    int end = 9;
    int arr[10] = {31,7,3,81,47,23,5,81,69,52};
    while(start <= end){
        int mid = (end+start)/2;
        int k = arr[mid];
        if(arr[mid- k] < k and arr[mid+1] < k){
            return mid;
        }
        if(arr[mid-1]>k){
            end = mid -1;
        }
        else
            start = mid +1;
    }
}*/


//using binart search:
/* find the middle element and check if it is greater than the last element then it mean its part of 
the rotated array so arr[mid] > arr[n-1] so we will add the mid with 1
then again find the mid element and */
#include <iostream>
using namespace std;
int main(){
    int arr[10] = {14,15,16,17,18,19,3,4,5,6};
    int start =0;
    int end = 9;
    int mid = (start+end)/2;
    while(start < end) {
        if(arr[mid] < arr[mid-1] && arr[mid] < arr[mid +1]){
            cout << mid;
            break;
        }
    }
}