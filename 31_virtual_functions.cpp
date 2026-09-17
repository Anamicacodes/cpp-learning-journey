#include <iostream>
using namespace std;
class A {
    public :
        virtual void show() {
            cout << "Show Base class";
        }
};
class B :public A {
    public : 
        void show (){
            cout << "Show derived class";
        }
};
int main(){
    A *ptr;
    B d;
    ptr = &d;
    ptr -> show();
}