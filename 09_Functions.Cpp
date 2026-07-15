#include <iostream>
using namespace std;
void func();
int add(int a,int b);
void summ(int a,int  b);
void res(int result);

int main() {
    func();
    int num1,num2;
    cout  << "Enter first number : ";
    cin >> num1;
    cout << "Enter second number : ";
    cin >> num2;
    int sum = add(num1,num2);
    cout <<sum << endl;

    int no1 = 10, no2 = 20;
    summ(no1,no2);
    return 0;
}
void func(){
    cout << "Anamica"<<endl ;
}

int add(int a,int b) {
    return a+b;
}
void res(int result){
    cout << result << endl  ;
}
void summ(int a, int b) {
    int sum_of_numbers = a+b;
    res(sum_of_numbers);
}
