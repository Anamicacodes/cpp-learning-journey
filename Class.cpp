#include <iostream>
using namespace std;
int addition(int a=4,int b=5,int c =8){   
    return a+b+c;
}
int main(){
    int x = addition(2,3,4);     //values get overridden
    cout << x << endl;
}