#include <iostream>
using namespace std;
int x=10;          //global 
int main(){
    int y =20;      //local
    cout <<x << "\n"; //prints 0
    cout <<y <<endl;         //prints garbage value 
    x=40;
    y = 30;
    cout << "After changing" <<endl;
    cout <<x << "\n"; //prints 40 --doesnt change rather assigns a local var x 
    cout <<y;         //prints 30
    return 0;
}