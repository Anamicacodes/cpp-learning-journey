#include <iostream>
using namespace std;
void func();
int add(int a,int b);

int main() {
    func();
    int num1,num2;
    cout  << "Enter first number : ";
    cin >> num1;
    cout << "Enter second number : ";
    cin >> num2;
    int sum = add(num1,num2);
    cout <<sum;
    return 0;
}
void func(){
    cout << "Anamica" ;
}

int add(int a,int b) {
    return a+b;
}