//26 August 
#include <iostream>
using namespace std;
int main(){
    int arr[8] = {4,8,7,6,5,3,2,1};
    for (int i=1;i<8;i++){
        int x = arr[i];
        int j=i-1;
        while(j >=0 and arr[j]>x){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] =x;
    }
    for(int i=0;i<8;i++){
        cout << arr[i]<< " ";
    }
}