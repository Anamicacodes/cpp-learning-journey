#include <iostream>
using namespace std;

void func(){
    int n;
    cin >> n ;
    int *ptr = new int[n];
    for(int i=0;i<n;i++){
        ptr[i] = i+1;
    }
    for(int i=0;i<n;i++){
        cout << ptr[i]<< endl;
    }
    delete[] ptr;

}

int main(){
    func();
}