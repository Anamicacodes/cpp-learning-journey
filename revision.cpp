 #include <bits/stdc++.h>
 using namespace std;
 int main(){
 for(int i=0; i<numsSize ; i++ ){
        for(int j=0 ; j < numsSize; j ++){
            int currentsum = arr[j]+ arr[i];
            if (currentsum == target){
                return i,j;
            }
            else if(currentsum > target){
                j--;
            }
            else if (currentsum < target){
                i++;
            }
        }
    }
}