#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    while(n>1 and n%3 == 0){    //order of log n
        n = n/3;
    }
    if (n==1)
        cout << "true";
    else 
        cout << "false";
    
}
