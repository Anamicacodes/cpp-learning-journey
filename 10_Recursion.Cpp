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

int print_N_to_1(int nums){       //print numbers n to 1
    if (nums>0){
        cout << nums << endl;
        print_N_to_1(nums-1);
    }
}

int fac(int i){
    if (i == 0){
        return 1;
    }
    return i * fac(i-1);
}

int sum_of_N(int n){
    if (n == 0){               
        return 0;
    }
    int sum = n + sum_of_N(n-1);   
   }

/* int sum_of_N(int num,int n){
    if (num == n){
        return n;
    }
    int sum = num + sum_of_N (num+1, n);
    return sum; 
}
     */

int poww(int num, int n){
    if(n==1){
        return num;
    }
    if ( n == 0){
        return 1;
    }
    return num * poww(num,n-1);
    
}

int fab(int n){
    if (n==0 ){
        return 0;
    }
    if (n==1){
        return 1;
    }
    return fab(n-1) + fab(n-2);
}

int count_digits (int n){
    if (n<10){
        return 1;
    }
    return 1+ count_digits(n/10);
}

int sum_of_digits(int n){
    if(n<10){
        return n;
    }
    return n%10 + sum_of_digits(n/10);
}

int reverse_num ( int n){
    if(n<10){
        return n;
    }
    return n%10 * poww(10,count_digits(n/10)) + reverse_num(n/10);
}

void reverse_str(string &s, int left , int right){
    if (left >= right){
        return ;
    }
    swap(s[left], s[right]);
    reverse_str(s, left+1,right-1);
}

void palindrome(string &s,int left,int right){
    if (s[left] != s[right]){
        cout << "Not a palindrome!";
    }
    else {
        if (left >=right){
            cout << "It is a palindrome";
        return;
    }
        palindrome(s,left+1,right-1);
    }
}

bool palin(string &s,int left,int right){
    if(s[left]!=s[right]){
        return false;
    }
    if(left >= right){
        return true;
    }
    return palin(s,left+1,right-1);
}

int maximum(int arr[], int index, int curmax){
    if (index == arr.length()-1){
        return curmax;
    }
    curmax = arr[0];
    return maximum(arr[],index +1, curmax);
}
int main(){
    int num;
    cout << "Enter a number : " ;
    cin >> num;
    f(num);
    ana(5);
    int n;
    cout << "\nEnter terminating number :" ;
    cin >> n;
    print_1_to_N(1,n);
    print_N_to_1(n);
    cout << "Factorial of n is : " << fac(n) <<endl;
    cout << "Sum of First N natural numbers is : " << sum_of_N(n) << endl ;
    int power_of, raised_to;
    cout << "Enter power of number :";
    cin >> power_of;
    cout << "Enter raised to number : ";
    cin >> raised_to;
    cout << "Power of " << power_of << " raised to " << raised_to << " is: " << poww(power_of, raised_to) << endl;
    cout << "Fabonacci series of " << n << " is: " << fab(n) << endl ;
    int long_num;
    cout << "Enter a long number : ";
    cin >> long_num;
    cout << "Count of number of digits in " << long_num << " : " << count_digits(long_num) << endl;
    cout << "Sum of digits of the long number: " << sum_of_digits(long_num) << endl ;
    cout << "Reverse of the number : " << reverse_num(long_num)<< endl;
    string s_string;
    cout << "Enter a string : ";
    cin >> s_string;
    reverse_str(s_string,0,s_string.length()-1);
    cout << "Reverse of a string : " << s_string << endl ;
    palindrome(s_string,0,s_string.length()-1) ;
    cout<< endl;
    cout << "Is it a palindrome using bool function: " << palin(s_string,0,s_string.length()-1);
}