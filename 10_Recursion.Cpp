#include <iostream>
using namespace std;
int f(int x){
    if (x> 0){
        cout << x <<endl ;
        f(x-2);
        cout << x << endl ;  // prints all the remaining values of previous stack
}
}

void ana(int num){         //print a name n times 
    if (num> 0){
    cout << "Anamica" << "\t";
    ana(num -1);
    }
}

int print_1_to_N(int nums,int n){       //print numbers 1 to n
    if (nums <= n){
        cout << nums << endl;
        print_1_to_N(nums +1,n);
    }
}

int print_N_to_1(int nums,int n){       //print numbers n to 1
    if (nums>0){
        cout << nums << endl;
        print_N_to_1(nums-1,n);
    }
}

int fac(int i){
    if (i == 0){
        return 1;
    }
    return i * fac(i-1);
}


int main(){
    int num;
    cout << "Enter a number : " ;
    cin >> num;
    f(num);
    ana(5);
    int n;
    cout << "\nEnter terminating number :" ;
    cin >>n;
    print_1_to_N(1,n);
    print_N_to_1(n,0);
    cout << "Factorial of n is : " << fac(n) ;

}