#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = nullptr;
    }
};

class LinkedList
{
private:
    Node *head;

public:
    LinkedList()
    {
        head = nullptr;
    }

    void addToFront(int value)
    {
        Node *newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    void deleteAtPosition(int pos)
    {
        if (head == nullptr)
        {
            cout << "Empty list" << endl;
            return;
        }

        if (pos == 0)
        {
            Node *temp = head;
            head = head->next;
            delete temp;
        }
        else
        {
            Node *temp = head;
                        for (int i = 0; i < pos - 1 && temp != nullptr && temp->next != nullptr; i++)
                        {
                            temp = temp->next;
                        }

                        if (temp == nullptr || temp->next == nullptr)
                        {
                            cout << "Position out of range" << endl;
                            return;
                        }

            Node *nodeToDelete = temp->next;
            temp->next = nodeToDelete->next;
            delete nodeToDelete;
        }
    }

    void searchAtPosition(int pos)
    {
        Node *temp = head;
        for (int i = 0; i < pos && temp != nullptr; i++)
        {
            temp = temp->next;
        }

                if (temp == nullptr)
                {
                    cout << "Position out of range" << endl;
                }
                else
                {
                    cout << "Data at position " << pos << " is: " << temp->data << endl;
                }
    }

    void reverseList()
    {
        Node *prev = nullptr;
        Node *curr = head;
        Node *next = nullptr;

        while (curr != nullptr)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        head = prev;

        cout << "Reversed list: ";
        printList();
    }

    void printList()
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main()
{
    LinkedList list;

    list.addToFront(10);

    list.addToFront(20);

    list.addToFront(30);

    list.addToFront(40);

    list.addToFront(50);

    list.printList();

 
    list.deleteAtPosition(4);

    list.printList();

    list.searchAtPosition(1);

    list.reverseList();

    return 0;
}
