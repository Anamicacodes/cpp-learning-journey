#include <iostream>
using namespace std;
int main(){
    //Arithmetic Operator : 
    //unary operator 
    int num1;
    int num2;
    cout << "Enter first number: "  ;
    cin >>num1 ;
    cout << "Enter second number: " ;
    cin >> num2 ;
    int post_inc = num1++;
    int post_dec = num1--;
    int pre_inc = ++num1;
    int pre_dec = --num1;
    cout << "Post increment of " << num1 << " is : " << post_inc <<endl;
    cout << "Pre increment of " << num1 << " is : "<< pre_inc <<endl;
    cout << "Post decrement of " << num1 << " is : "<< post_dec <<endl;
    cout << "Post decrement of " << num1 << " is : "<< post_dec <<endl; 
    //Binary operators : 
    cout << num1 <<" + " << num2 << " = " << num1+num2 <<endl;
    cout << num1 <<" - " << num2 << " = " << num1-num2 <<endl;
    cout << num1 <<" * " << num2 << " = " << num1*num2 <<endl;
    cout << num1 <<" / " << num2 << " = " << num1/num2 <<endl;
    cout << num1 <<" % " << num2 << " = " << num1%num2 <<endl; 
    //BITWISE operators : 
    cout << "Bitwise " << num1 << " AND (&) " << num2 << " is :" << (num1 & num1) << endl;
    cout << "Bitwise " << num1 << " OR (|) " << num2 << " is :" << (num1 | num1) << endl;
    cout << "Bitwise " << num1 << " XOR (^) " << num2 << " is :" << (num1 ^ num1) <<endl;
    cout << "Bitwise " << num1 << " NOT (~) "  << " is :" << ~num1 <<endl;
    cout << "Bitwise " << num1 << " LEFT SHIFT (<<) " <<  " is :" << (num1<<1) <<endl;
    cout << "Bitwise " << num1 << " RIGHT SHIFT (>>) " << " is :" << (num1>>1)  <<endl;
    //LOGICAL operators : 
    cout << "Logical AND : " << num1 << " && " << num2 <<" is: " << (num1&&num2) << endl;
    cout << "Logical OR : " << num1 << "||" << num2 <<" is: "<< (num1||num2) << endl;
    cout << "Logical NOT : !" << num1  << " is: " << (!num1) << endl;
    //ASSIGNMENT operator: 
    int a=num1;
    int b=0;
    cout << "Simple Assignment : a = num1 then a = " << a<<endl;
    b +=a;
    cout << "Add and assign : b+=a : then b = " << b <<endl;
    b-=a;
    cout << "Subtract and assign : b-=a then b= " << b <<endl; 
    b*=a;
    cout << "Multiply and assign : b*=a then b= " << b <<endl;
    b/=a;
    cout << "Divide and assign : b/=a then b= " << b <<endl;
    b%=a;
    cout << "Modulus and assign : b%=a then b= " << b <<endl ;
    b&=a;
    cout << "BITWISE AND and assign : b&=a then b= " << b <<endl ;
    b^=a;
    cout << "Bitwise XOR and assign : b^=a then b= " << b <<endl ;
    b<<=1;
    cout << "Left shift and assign : b<<=1 then b= " << b <<endl ;
    //Find the result : 
    int x,y,z;
    x=y=z=10;
    cout << x <<y <<z <<endl ; // prints 101010
    //Relational Operators : 
    a=10;
    b = 20; 
    cout << " a= " <<a << " and b= " << b << endl ;
    cout <<" a==b : " << (a==b) << endl;
    cout <<" a!=b : " << (a!=b) << endl;
    cout <<" a>b : " << (a>b) << endl;
    cout <<" a<b : " << (a<b) << endl;
    cout <<" a>=b : " << (a>=b) << endl;
    cout <<" a<=b : " << (a<=b) << endl;
    return 0;
}