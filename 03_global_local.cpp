#include <iostream>
using namespace std;
int x;          //global 
int main(){
    int y;      //local
    cout <<x << "\n"; //prints 0
    cout <<y;         //prints garbage value 
    return 0;
}