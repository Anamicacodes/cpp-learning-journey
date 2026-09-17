#include <iostream>
using namespace std;
class Print {
    public : 
        void display(int x) {
            cout << x;
        }
        void display(double y){
            cout << y;
        }
};
int main(){
    Print obj;
    obj.display(10);
    obj.display(12.5);
}