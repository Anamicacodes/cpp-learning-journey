//Pointers dont exist in Java or python but they do in C,Cpp

#include <iostream> 
using namespace std;
void test(int &x, int y){
    x+=5;
    y*=2;
    cout << x << endl << y << endl;
}

void pointer_method(int *x, int y){
    *x +=5;        //pointer call by reference
    y *=2;         //call by value
    cout << *x <<y;
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

    int i=3,q=4;
    pointer_method(&i,q);
    cout << i << q ;
    
    int k = 10;
    int *l = &k;
    *l = 25;
    cout << k;    //pointer value change

    int a = 5;
    int b = 10;
    int *p = &a;
    *p = b;          //is pointing differently now or assigning 
    cout << a << " " << b;    
}