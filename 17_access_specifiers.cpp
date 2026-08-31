#include <iostream>
using namespace std;
class demo{
    private : 
        int a;
    protected : 
        int b;
    public : 
        int c;
        void set() {a=10;b=20;c=30;}
        void show(){
            cout << a << " " << b << " " << c << endl;
        }
};
class child : public demo {
    public : 
        void access(){
            // a = 10; we cant access it 
            b = 20 ; c =30;
        }
};
int main(){
    demo d;
    d.set();
    d.show();
    // d.a = 5; yeilds error because private n can be used inside the class only 
    // d.b = 10; yeilds error because private and can be accessed inside the inhertied class only
    d.c = 40;
    cout << d.c;
}