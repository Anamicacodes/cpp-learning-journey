#include <bits/stdc++.h>
using namespace std;
int main(){
    int carry =0;
    string s1= '12345';
    string s2= '23671';
    for(int i=4;i>=0;i--){
        int x= {(s1[i] - '0') + (s2[i] - '0')} + carry;
        int ans = to_string((x%10 + '0')+ ans);
        carry = x%10;
    }
    if carry(!=0){
    ans = (carry + '0') + ans ;
    }
}