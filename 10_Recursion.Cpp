#include <iostream>
using namespace std;
int f(int x){
    if (x> 0){
        cout << x <<endl ;
        f(x-2);
        cout << x << endl ;  // prints all the remaining values of previous stack
}
}
int main(){
    int num;
    cout << "Enter a number : " ;
    cin >> num;
    f(num);
}