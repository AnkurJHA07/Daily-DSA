#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node() {
        this->data = 0;
        this->next = NULL;
    } 
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};


//i want to insert a node right after head of linked list
void insertATHead(Node* &head, int data){
    //step 1
    Node* newNode = new Node(data);
    //step 2
    newNode -> next = head;
    //step 3
    head = newNode;
}
    void print(Node* head){

    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp ->next;
    }
}
    

int main(){

    // Node* first = new Node(10);
    // Node* second = new Node(20);
    // Node* third = new Node(60);
    // Node* fourth  = new Node(50);
    // Node* fifth  = new Node(80);


    // first->next = second;
    // second->next = third;
    // third->next = fourth;
    // fourth->next = fifth; 

    Node* head = new Node(10);
    insertATHead(head, 20);
    insertATHead(head, 30);
    insertATHead(head, 40);
    insertATHead(head, 90);

    print(head);
    return 0;
}
