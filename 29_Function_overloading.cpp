#include <iostream>
using namespace std;
class calculate {
    public: 
        int add(int a, int b) {
            return a+b;
        }
        int add(double a){
            return a;
        }
        int add(int a,int b ,int c){
            return a+b+c;
        }
};
int main(){
    calculate cal;
    cout << cal.add(2,3) << endl;
    cout << cal.add(2) << endl;
    cout << cal.add(2,3,4) << endl;
    
}