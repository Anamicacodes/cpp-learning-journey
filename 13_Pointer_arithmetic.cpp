#include <iostream>
using namespace std;
int main(){
int arr[5]= {10,20,30,40,50};
int* p = arr;
cout << * (p+1);
cout << *p++ << endl;
cout << *++p << endl;
cout << *--p << endl;

int* start = &arr[1];
int* end = &end[4];
int diff = end - start;

cout << diff << endl;
}