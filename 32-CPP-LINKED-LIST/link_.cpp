#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node *next;

    Node(){

            this->data=0;
            this->next=NULL;
    }

};


int main(){

    Node *obj1 = new Node();
    obj1->data = 100;

    Node *obj2 = new Node();
    obj2->data = 200;
    obj1->next = obj2;

    Node *obj3 = new Node();
    obj3->data = 300;
    obj2->next = obj3;

    Node *obj4 = new Node();
    obj4->data = 400;
    obj3->next = obj4;

    Node *obj5 = new Node();
    obj5->data = 500;
    obj4->next = obj5;

    // cout << obj1<<"_____________" << obj1->data <<"_______________" << obj1->next<< endl;
    // cout << obj2<<"_____________" << obj2->data <<"_______________" << obj2->next<< endl;
    // cout << obj3<<"_____________" << obj3->data <<"_______________" << obj3->next<< endl;
    // cout << obj4<<"_____________" << obj4->data <<"_______________" << obj4->next<< endl;
    // cout << obj5<<"_____________" << obj5->data <<"_______________" << obj5->next<< endl;


    // cout << obj1->data <<endl;
    // cout << obj1->next->data <<endl;
    // cout << obj1->next->next->data <<endl;
    // cout << obj1->next->next->next->data <<endl;
    // cout << obj1->next->next->next->next->data <<endl;

    // ---------------next-----------------
    
    //  Node *ptr = obj1;

    //   while(ptr->next != NULL){
    //     cout << ptr->data << endl;
    //     ptr = ptr->next;      
    //   };


        Node* ptr = obj1;
        while (ptr != NULL) {
        cout << ptr->data << endl;
        ptr = ptr->next;

    };    
    return 0;
}