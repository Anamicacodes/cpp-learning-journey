#include <iostream>
using namespace std;
int main(){
    //if  :
    int num;
    cout <<"Enter a number :" ;
    cin >> num;
    if (num%2 ==0 )
        cout <<"Divisible by 2";

    //if else  :
    int age;
    cout << "Enter your age: " ;
    cin >> age;
    if (age >18 ) {
        cout <<"You are eligible" << endl;
        cout <<"Please move towards the polling booth!"<<endl;
    }
    else 
        cout << "Can not vote";

    //else if : 
    int marks ;
    cout << "Enter your marks : ";
    cin >> marks;
    if (marks >=90 ) 
        cout << "Your ward secure O grade! " <<endl ;
    else if (marks >=80 && marks< 90) {
        cout << "Your ward secure A grade! " <<endl ;
    }
    else if (marks >=70 && marks<80) {
        cout << " Your ward secure B grade! " <<endl ;
    }
    else if (marks >=60 && marks<70) {
        cout << "Your ward secure C grade! " <<endl ;
    }
    else
        cout << "Your ward failed!" <<endl ;
}