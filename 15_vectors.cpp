#include <iostream>
using namespace std;
#include <vector>

int main(){
    vector<int> v = {10,20,30};
    cout << v.size() << endl;        //3
    cout << v.capacity() << endl;    //3
    v.push_back(40);
    cout << v.size() << endl;        //4
    cout << v.capacity() << endl;    //6
    v.push_back(50);
    cout << v.size() << endl;        //5
    cout << v.capacity() << endl;    //6
    v.push_back(60);
    cout << v.size() << endl;        //6
    cout << v.capacity() << endl;    //6
    v.push_back(70);
    cout << v.size() << endl;        //7
    cout << v.capacity() << endl;    //12
}