//Pointers dont exist in Java or python but they do in C,Cpp

#include <iostream> 
using namespace std;
void test(int &x, int y){
    x+=5;
    y*=2;
    cout << x << endl << y << endl;
}

int main(){
    int a =15;
    int* p = &a;
    cout << a << endl;
    cout << p << endl;
    cout << *p << endl;

    int x=20;
    int *j =&x;
    *j =*j +1;
    cout << x << endl;
    
    //call by value call by reference
    int m=3, n=4;
    test(m,n);
    cout << m <<endl << n << endl;
}