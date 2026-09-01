#include <iostream>
using namespace std;
class Parent {
    public: 
    int sum(int a,int b){
        return a+b;
    }
};
class A: public Parent {
    public: 
    int diff(int a,int b){
        return a-b;
    }
};
class B: public Parent {
    public: 
    int mul(int a,int b){
        return a*b;
    }
};
class C: public Parent {
    public: 
    int div(int a,int b){
        return a/b;
    }
};
int main(){
    A a;
    cout << "Sum from parent of 5 and 3 is : " << a.sum(5,3)<< endl;
    cout << "Difference of 5 and 3 is : "<< a.diff(5,3)<< endl;
    B b;
    cout << "Multiply of 5 and 3 is : " <<b.mul(5,3) << endl;
    C c;
    cout << "Division of 10 and 5 is : " <<c.div(10,5) << endl;


}