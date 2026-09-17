#include <iostream>
using namespace std;
class A {
    public : 
        void show() {
            cout << "Show A" << endl;
        }
};
class B {
    public : 
        void show(){
            cout << "Show B" << endl;
        }
};
class C: public A, public B {
    public : 
        void show(){
            cout << "Show C" << endl;
            A::show();
        }

};
int main(){
    C obj;
    obj.show();
    //C::obj.show();
    //B::obj.show();
    //A::obj.show();
}