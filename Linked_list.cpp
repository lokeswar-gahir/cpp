#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
    
};
void insertAtHead(Node* &head, int data){
    Node* temp = new Node(data);
    temp-> next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int data){
    Node* temp = new Node(data);
    tail->next  = temp;
    tail = tail->next;
}

void printll(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<< temp->data<< " ";
        temp = temp-> next;
    }
    cout<<endl;
}

int main(){
    Node* node1 = new Node(10);
    // cout << node1 -> data << endl;
    // cout << node1 -> next << endl;
    Node* head = node1;
    Node* tail = node1;

    insertAtHead(head, 11);
    insertAtHead(head, 12);
    insertAtTail(tail,9);
    insertAtTail(tail,8);
    printll(head);
    
    return 0;
}