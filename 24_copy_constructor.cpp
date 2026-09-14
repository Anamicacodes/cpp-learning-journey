#include <iostream>
using namespace std;
class Student {
    private : 
        int roll;
        string name;
    public :
        Student(int r, string n){
            roll =r ;
            name =n;
        }
        Student (const Student &s){
            roll = s.roll;
            name = s.name;
        }
        void display() {
            cout << "Name : " << name << endl;
            cout << "Roll : " << roll << endl;
        }
};
int main(){
    Student s1(101,"Raahi");
    Student s2 =s1;
    cout << "Student 1:" << endl;
    s1.display();
    cout  << "Student 2:" << endl;
    s2.display();
}