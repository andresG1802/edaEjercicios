#include<iostream>
using namespace std;

class Node{
    public:
        int value;
        Node* next;
};
void printList(Node* n)
{
    int i=0;
    while(n != NULL)
    {
        cout<<"Elemento "<<i<<":"<<n->value<<endl;
        i++;
        n = n->next;
        
    }
}
void insertAtFront(Node** head,int nextValue)
{
    Node* newNode = new Node();
    
    newNode->value=nextValue;

    newNode->next=NULL;
    *head = newNode;
    //commit

}
int main()
{
    Node* head=new Node();

    int cantidad,elemento;

    cout<<"Ingrese la cantidad de contenidos en la linked list: ";
    cin>>cantidad;

    for(int i=0;i<cantidad;i++)
    {
        cout<<"Elemento: ";
        cin>>elemento;
        insertAtFront(&head,elemento);
    }


    printList(head);
    
    return 0;
}
//Crear una linked list vacía e imprimir su contenido.


