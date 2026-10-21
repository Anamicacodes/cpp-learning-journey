//Find the maximum length of the subarrays in which the frequency of 0's and 1's is equal 
#include <iostream>
using namespace std;
int main(){
    
}

//Monotonic stack is the one which is always increasing or decreasing 

//Find the first maximum element to the right
#include <iostream>
#include <stack>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n],ans[n];
    for(int &i: arr) cin >> i;

    stack<int>st;

    for(int i=n-1; i>0;i--){
        if(!st.empty())
            ans[i] =-1;
        else {
            while(!st.empty() and (st.top() < arr[i]))
                st.pop();
            if(st.empty()) ans[i] = -1;
            else ans[i] = st.top();
        }
        st.push(arr[i]);
    }
    for(int i:ans) cout << i << " ";
}

//segment tray


