//Inline Functions : 
//2nd september
#include <iostream>
using namespace std;
inline int addition(int a,int b){
    return a+b;
}
int add(int a,int b=5){   //we cant pass default arguments into the first element 
    return a+b;
}
int main(){
    int x = addition(10,25);
    cout << x << endl;
    cout << add(25);
}