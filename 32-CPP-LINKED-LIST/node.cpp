#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(){
        this->data = 0;
        this->next = NULL;
    }
};

   

int main(){

    Node *node1 = new Node();
    Node *node2 = new Node();

    node1->data =100;
    node2->data =200;

    node1->next = node2;

    cout << node1->data <<endl;
    cout << node2->data <<endl;

    
    return 0;
}
