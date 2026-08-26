#include <iostream>
using namespace std;
class lpu {
    public  : 
        int x;
        string name;
};
class student : public lpu{
    public : 
        int a;
        float height;
};
int main(){
    lpu obj;
    student s1;
    obj.x =15;  
    obj.name = "Anamica";
    s1.a = 8;
    s1.height = 9.2;
    cout << obj.x << "   ";
    cout << obj.name<< "   ";
    cout << s1.a<< "   ";
    cout << s1.height;
}