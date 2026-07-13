#include <iostream>
using namespace std;
int main(){
    //for loop
    for (int i=0; i<=5; i++){
        cout << i << endl ;
    }
    //while loop 
    int j=1;
    while (j<=5){
        cout << j << endl;
        j++;
    }
    //----------------------------------
    int pin;
    cout << "Enter pin : ";
    cin >> pin;
    while (pin!=9999){
        cout << "Incorrect pin" << endl;
        cout << "Enter correct pin : ";
        cin >> pin;
    }
    cout << "You are logged in!"<<endl;
    //Do while loop 
    int k=5;
    do {
        cout << k << endl ;
        k--;
    }while(k > 0);

    int correct_pass = 1234;
    int pass;
    do {
        cout <<"Enter correct password : " ;
        cin >> pass;
    } while (pass !=correct_pass);
}