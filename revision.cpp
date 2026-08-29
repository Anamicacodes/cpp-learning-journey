#include <iostream>
using namespace std;
int power_of (int num,int n){
    if (n==0){
        return 1;
    }
    return num * power_of(num, n-1);
}

int main(){
    int n;
    cin >> n;
    cout << power_of(2,n);
}