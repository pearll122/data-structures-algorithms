#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int d) {
        this -> data = d;
        Node* next = NULL;
        Node* prev = NULL;
    }
};

void print(Node* head) {
    Node* ptr = head;
    while(!ptr) {
        cout << ptr->data << endl;
        ptr = ptr->next;
    }
    cout<<endl;
}