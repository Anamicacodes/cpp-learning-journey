#include <iostream>
using namespace std;
class abc {
    public :
    int x;
    string str;
};

//create a function named PrintName() and call it inside the main function: 
void PrintName(){
    cout << "Hello Vijay!";
}
//create a function naming factorial and call it from the main function and return the value 
int factorial(int n){
    if (n==0 || n==1){
        return 1;
    }
    return n * factorial(n-1);

    /* int ans =1;
    for (int i=1;i<=n;i++){
        ans =ans *i;
    }
    */
}

//pattern printing 

int main(){
    abc obj1;
    obj1.x = 2;
    obj1.str = "Vijay";
    cout << obj1.x << " " << obj1.str <<endl;
    PrintName();
    cout << endl;

    for (int i=1;i<5;i++){
        for (int j=1;j<5;j++){
            cout<< "*";
        }
        cout << "\n";
    }
    cout << endl;
    for (int i=1;i<5;i++){
        for (int j=i;j<5;j++){
            cout<< "*";
        }
        cout << "\n";
    }
    cout << endl;
    for (int i=1;i<5;i++){
        for (int j=0;j<i;j++){
            cout<< "*";
        }
        cout << "\n";
    }

    cout << endl;
    for (int i=1;i<5;i++){
        for (int j=5-i;j<5;j++){
            cout<< "*";
        }
        cout << "\n";
    }
    cout << endl;
    for (int i=1;i<=4;i++){
        for (int j=1;j<=7;j++){
            if((j>=5-i) && (j<= 3+i)){
                cout<< "*";
            }
            else {
                cout << " ";
            }
        }
        cout << "\n";
    }

    //for reverse j>=1 and j<=8-i

    int n;
    cout << "Enter a number to find its factorial : ";
    cin >> n;
    cout << factorial(n);

}