#include <iostream>
using namespace std;
//A class without a constructor 
class Student{
    int roll;      //automatically private
    public : 
        void setRollno(int r){
            roll =r;
        }
        void display(){
            cout << roll << endl;
        }
};

// class with constructor : 
class Students {
    int roll;   //private
    public : 
        Students(int r){      //constructor 
            roll = r; 
            cout << roll << endl;
        }
};
int main(){
    Student s1;
    s1.setRollno(101);
    s1.display();
    Students ss1(101);
}