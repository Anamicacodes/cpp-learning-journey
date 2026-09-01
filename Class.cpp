//inside a class, make two functions having the same name with different parameters and call them from the child
#include <iostream>
using namespace std;
class functionss{
    public : 
        int add(int a,int b){
          int sum = a+b;
            return sum;
        }
        string add(string a,string b){
            string sum = a+b;
            return sum;
        }
};

int main(){
    functionss f;
    cout << f.add(5,3) << endl;
    cout << f.add("Ana","Mica");
}