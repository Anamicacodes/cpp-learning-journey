//find the frequency occurence of the element more than the half of the size of the array 
//ans is 3 in this case : 
// problem no 169 on leetcode 

#include <iostream>
using namespace std;
int main(){
    int arr[9] = {1,3,3,2,4,3,3,2,3};
    int size = (sizeof(arr) / sizeof(arr[0]) )  /2;
    cout << size;
}
