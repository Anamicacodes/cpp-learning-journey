//Create a funciton with child and parent class with function overloading 
// in this inheritance and function overloading both are taking place 
#include <iostream>
using namespace std;
class Parent {
    public: 
        int operation(int a ,int b){
            int total = a+b;
            return total;
        }
};
class Child : public Parent {
    public: 
        int operation(int a,int b) {
            int total = a-b;
            return total;
        }
};
int main(){
    Child C;
    cout << C.operation(7,3);
}