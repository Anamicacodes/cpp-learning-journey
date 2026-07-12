#include <iostream>
using namespace std;
int main(){
    //Ternary Oprators :
    int age;
    cout << "Enter your age : " ;
    cin >> age;
    cout << ((age >=18 ) ? "Eligible for voting " : "Not Eligible for voting" )<<endl ;

    int num1,num2;
    cout <<"Enter num1:";
    cin>> num1;
    cout <<"Enter num2 :";
    cin >> num2;
    cout << ((num1 > num2 )? num1 : num2 );
}