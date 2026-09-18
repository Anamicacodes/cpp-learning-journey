/* This doesnt work because the class is a user defined data type and the compiler does not know
how to react in such cases where the int isnt specified but incrementation is asked : 
#include <iostream>
using namespace std;
class Insta {
    public : 
        int followers;
};
int main(){
    Insta i;
    i++;
    return 0;
}

That is why we built the concept of operator overloading so the function works in both 
primitive and user defind data types : 

*/ 

#include <iostream>
using namespace std;
class Channel {
    int subscribers ;
    public : 
        Channel(int s){
            subscribers=s;
        }
        void operator++(){
            subscribers++;
        }
        void display(){
            cout << subscribers;
        }
};
int main(){
    Channel gs(1000);
    ++gs;
    //gs.operator++;
    gs.display();
    return 0;
}