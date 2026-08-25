#include <iostream>
using namespace std;
class student {
    public : 
        string name;
        int age;
        void display(){
            cout << "Name : " << name << "   Age : " << age << endl;
        }
};

int main(){
    student s1;
    s1.name = "Anamica";
    s1.age = 19;
    s1.display();
}