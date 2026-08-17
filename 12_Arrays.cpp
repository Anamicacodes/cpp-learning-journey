#include <iostream>
using namespace std;

void PrintArray(int arr[], int size){
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
}
int main(){
    int numbers[]= {10,20,30,40,50};
    int size =5;
    PrintArray(numbers,size);
}