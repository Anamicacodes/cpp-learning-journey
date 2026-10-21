#include <iostream>
using namespace std;
class Node {
    public : 
    int data;
    Node* prev;
    Node* next;
    
    Node (int value) {
        data = value;
        prev = NULL;
        next = NULL;
    }
};
    int sum=0;
void preorder(Node* temp){
    if(temp == NULL){
        return;
    }
    sum+= temp->data;
    cout << temp->data << " ";
    preorder (temp->prev);
    preorder (temp->next);

    
}
int main(){
    /* Node* n1 = new Node(10);
    Node* n2 = new Node(12);
    Node* n3 = new Node(14);
    Node* n4 = new Node(10);
    Node* n5 = new Node(15);

    n1->prev = n2;
    n1->next = n3;
    n2->prev = n4;
    n2->next = n5;
    */
   Node* root = new Node(10);
   root->prev= new Node(12);
   root->next = new Node(14);
   root->prev->prev = new Node(10);
   root->prev->next = new Node(15);  

   preorder(root);
   cout << "Sum: " << sum << endl ;
}