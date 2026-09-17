#include <iostream>
using namespace std;
class A {
    public :
        void show(){
            cout << "Show Base class";
        }
};
class B: public A {
    public : 
        void show(){
            cout << "Show Derived Class";
        }
};
int main(){
    B obj;
    obj.show();
    cout << endl;
    obj.A::show();
}