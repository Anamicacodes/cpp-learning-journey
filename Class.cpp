#include <iostream>
using namespace std;
void func1(int a,int b){
    a= a+b;
    return;
}
void func2(int &a,int &b){
    a= a+b;
    return;
}
int main(){
    int a =5;
    int b =6;
    cout << a << " " << b << endl;
    func1(a,b);
    cout << "Answer by call by value : " << a << " " << b<< endl;
    func2(a,b);
    cout << "Answer by call by reference : " << a << " " << b;
}