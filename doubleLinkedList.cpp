#include<iostream>
using namespace std;

class Node{
    public:
        int value;
        Node* next;
        Node* previous;
};
void printForward(Node*head){
    Node* traverser = head;
    while(traverser!=nullptr)
    {
        cout<<traverser->value<<endl;
        traverser = traverser->next;
    }
}
void printBackward(Node*tail){
    Node* traverser = tail;
    while(traverser!=nullptr)
    {
        cout<<traverser->value<<endl;
        traverser = traverser->previous;
    }
}
int main()
{
    Node* head;
    Node* tail;

    Node* node = new Node();

    node->value = 4;
    node ->next = nullptr;
    node->previous = nullptr;
    head = node;
    tail = node;
    //Add 2nd Node
    node = new Node();
    node->value = 5;
    node->next = nullptr;
    node->previous = tail;
    tail->next = node;
    tail = node;
    
    //Add 3nd Node
    node = new Node();
    node->value = 6;
    node->next = nullptr;
    node->previous = tail;
    tail->next = node;
    tail = node;


    cout<<"PrintForward"<<endl<<endl;
    
    printForward(head);
    
    cout<<"PrintBackward"<<endl<<endl;
    
    printBackward(tail);
    return 0;
}