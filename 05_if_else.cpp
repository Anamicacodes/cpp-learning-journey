#include <iostream>
using namespace std;
int main(){
    //if  :
    int num;
    cout <<"Enter a number :" ;
    cin >> num;
    if (num%2 ==0 )
        cout <<"Divisible by 2" <<endl;

    //if else  :
    int age;
    cout << "Enter your age: " ;
    cin >> age;
    if (age >18 ) {
        cout <<"You are eligible" << endl;
        cout <<"Please move towards the polling booth!"<<endl;
    }
    else 
        cout << "Can not vote" <<endl;

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

    //Nested if :
    int pin;
    cout << "Enter your pin :" ;
    cin >> pin;
    int correct_pin = 2007;
    int bal = 1000000;
    int daily_limit = 5000;
    int amt;
    if (pin == correct_pin){
        cout << "Enter amount to be withdrawn : ";
        cin >> amt;
        if (amt <= bal){
            if (amt <= daily_limit){
                if (amt %100 == 0){
                    cout << "Please collect your cash!"<<endl;
                }
            }
            else {
                cout << "Daily Limit exceeded!"<<endl;
            }
        } 
        else {
            cout << "Insuffiecient balance!"<<endl;
        }
    }
    else {
        cout << "Incorrect pin!"<<endl;
    }

    //Nested if else :
    string stream;
    cout << "Enter your stream (Sci/comm): ";
    cin >> stream;
    string sub;
    cout << "Enter your subject (PCM/Accounts) :";
    cin >> sub;
    int markss;
    
    if (stream == "Sci" || stream == "sci" || stream == "Science" || stream == "science"){
        if (sub == "PCM") {
            cout << "Enter you marks : ";
            cin >> markss;
            if(markss >=90 ){
                cout << "Enligible for engineering!" << endl;
            }
            else {
                cout << "Not Enligible for engineering!" << endl ;
            }
        }
        else {
            cout << "Incorrect subject!" <<endl;
        }
    }
    else if (stream == "Comm" || stream =="comm" || stream =="Commerce" || stream == "commerce"){
        if (sub == "Accounts") {
            cout << "Enter you marks : ";
            cin >> markss;
            if(markss >=90 ){
                cout << "Enligible for BBA/BCA!" << endl;
            }
            else {
                cout << "Not Enligible for BBA/BCA!" << endl ;
            }
        }
        else {
            cout << "Incorrect subject!" <<endl;
        }
    }
    else {
        cout <<"Choose a suitable course!";
    }
     
}