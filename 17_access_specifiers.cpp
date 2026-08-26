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
            cout << a << b << c << endl;
        }
}
int main(){
    show();
}