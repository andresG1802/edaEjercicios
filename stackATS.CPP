#include<iostream>

using namespace std;

class Node{
    public:
        int dato;
        Node *siguiente;
};

void agregarPila(Node *&,int);
void sacarPila(Node *&,int &);

int main()
{
    Node *pila = NULL;
    int dato,rpt;

    while(true)
    {
        cout<<"Digite un numero:";
        cin>>dato;
        agregarPila(pila,dato);
        cout<<"\ncontinuar(1/0):";
        cin>>rpt;
        if(rpt == 0) break;
    }

    while(pila != NULL)
    {
        sacarPila(pila,dato);
        if(pila != NULL)
        {
            cout<<dato<<" , ";
        }
        else
        {
            cout<<dato<<" . ";
        }
    }
    return 0;
}
void agregarPila(Node *&pila,int n)
{
    Node *nuevo_nodo = new Node();
    nuevo_nodo->dato = n;
    nuevo_nodo->siguiente = pila;
    pila = nuevo_nodo;
}
void sacarPila(Node *&pila,int &n)
{
    Node *aux = pila;
    n = aux->dato;
    pila = aux->siguiente;

    delete aux;
}