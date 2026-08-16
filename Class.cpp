/* #include <iostream>
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
    
}
 */
/*
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
    for(int i=1;i<=4;i++){
        for(int j=1;j<=7;j++){
            if  (j >=( 5-i) and j<=(i+3)){
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }

    for(int i=1;i<=7;i++){
        for (int j=1;j<=4;j++){
            if (i<=4){
                if(j<=i){
                cout << "*";
            }
                else {
                cout <<" ";
            }
        }
        else{
            if (j <=8-i){      //for 8 we can write n+1 because n was 7
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
    }
    cout <<endl;
}

/*for(int i=0;i<7;i++){
    for (int j=4;j>=0;j--){
        cout << "*"; 
    }
    cout << endl;
}
    
   for (int i=1;i<=6;i++){
    cout << "* ";
   }
cout << endl;
   for (int i=2;i<=6;i++){
        cout << "*         *"<<endl;
   }
   for(int i=1;i<=6;i++){
        cout << "* ";
   }

cout << endl;
   for (int i=1;i <=7;i++){
        for(int j=1;j<=6;j++){
            if (i==1 || i==7 || j==1 || j==6){
                cout << "* ";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
   }
cout << endl;
    for (int i=1;i<=7;i++){
        for(int j=1;j<=7;j++){
            if(i<=4){
                if(j==i || j==8-i){
                    cout << "*";
                }
                else {
                    cout << " ";
                }
            }
            else {
                if(j==i || j==8-i){
                    cout << "*";
                }
                else {
                    cout << " ";
                }
            }
        }
        cout << endl;

   }
    cout << endl;
   for(int i=1 ; i<=5;i++){
    for(int j=1;j<=9 ;j++){
        if(j==i || j==9 ||j==1 || i+j==10 ){
            cout << "*";
        }
        else {
            cout << " ";
        }
    }
    cout << endl;
   }   

   cout << endl;

   for (int i=1;i<=4;i++){
        for (int j=1;j<=7;j++){
            if ((j>=5-i) && (j<= 3+i))
            {
                cout<< "*";
            }
            else {
                cout << " ";
            }
        }
        cout << "\n";
    }
    for (int i=4;i>=1;i--){
        for (int j=7;j>=1;j--){
            if((j>=5-i) && (j<= 3+i)){
                cout<< "*";
            }
            else {
                cout << " ";
            }
        }
        cout << "\n";
    }

    
    int n;
    cout << "Enter a number to find its factorial : ";
    cin >> n;
    cout << factorial(n)<<endl ;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=0;i<n;i++){
        cout << arr[i] << "  " ;
    }
    //find the index of the target element : 
    int ele;
    cout << "\nEnter the element you want to find in your array:" ;
    cin >> ele; 

    //Linear search : time complexity is order of O(n)
    for(int i=0;i<n;i++){
        if (arr[i]==ele){
            cout << "The index of the target element is : " << i<<endl;
        }
    }

    //finding the last occurence
    int idx = -1;
    for(int i=0;i<7;i++){
        if(arr[i]== ele){
            idx =i;
        }
    } 
    cout << idx;

    //Binary Search : 
    int target;
    cout << "\nEnter the target number : ";
    cin >> target;
    int ar[10]={1,3,4,6,7,8,23,26,36,47};
    int low =0 ;
    int high =n-1;
    while(low<high)
    {
        int mid = (low+high)/2;
        if(target ==ar[mid] ){
            cout << mid;
        }
        else if (target > ar[mid]){
            low = mid +1;
        }
        else if (target < ar[mid]){
            high = mid-1;
        }
}

}
        */
/*
//14august 2026 
#include <iostream> 
using namespace std;
bool is_prime(int n){           //order of root n
    for(int i=2; i<n;i++){
        if( n%i == 0){
            return false;
        }
    }
    return true;
}

bool is_prime_or_not(int n){           //order of root n 
    for(int i=2; i*i <=n ;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int num;
    cout << "Enter a number : ";
    cin >> num;
    if (is_prime(num))
        cout << "Prime number";
    else 
        cout << "Not Prime";
} 
*/

/*
//to find the minimum distance required to reach or exceed 500
#include <iostream>
using namespace std;
int main(){
    for (int i=1;i<=500;i++){
        if((i*i + 4*i +7) >=500){       //complexity is order of root n
            cout << i;
            break;
        }
    }
}*/

/*//Binary search code for looking for a first greatest element :
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    int low =0 ;
    int high = n;
    int target = 500;
    int mid = (low + high)/2;
    int value = mid*mid + 4*mid + 7 ;
    while(low<high){
    if ( value > n){
        high = mid -1;
    }
    else {
        low =  mid +1;
    }
}
}
*/