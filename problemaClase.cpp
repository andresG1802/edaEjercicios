#include<iostream>
#include<stdlib.h>
using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};
void insertarCola(Nodo *&,Nodo *&,int);
bool cola_vacia(Nodo *);
void suprimirCola(Nodo *&,Nodo *&,int &);
void bfs(Nodo *&,Nodo *&,int &);
int main(){

	int opc;
	int dato,datoBuscar;

	Nodo *frente = NULL;
	Nodo *fin = NULL;

	do{
		cout<<"1. Insertar un caracter a la cola"<<endl;
		cout<<"2. Mostrar todos los elementos de la cola"<<endl;
		cout<<"3. Busqueda de un nodo"<<endl;
		cout<<"4. Salir"<<endl;
		cout<<"Opcion: ";
		cin>>opc;

		switch(opc){
			case 1: cout<<"\nIngrese el caracter para agregar a la cola: ";
					cin>>dato;
					insertarCola(frente,fin,dato);
					break;
			case 2: cout<<"\nMostrando los elementos de la cola: ";
					while(frente != NULL){
						suprimirCola(frente,fin,dato);
						if(frente != NULL){
							cout<<dato<<" , ";
						}
						else{
							cout<<dato<<".";
						}
					}
					cout<<"\n";
					system("pause");
					break;
			case 3: cout<<"\nBuscando elemento de la cola: ";
                    cout<<"\nIngrese el dato a buscar: ";cin>>datoBuscar;
                    bfs(frente,fin,datoBuscar);
					break;
			case 4: break;
		}
		system("cls");
	}while(opc != 3);

	return 0;
}

//Función para insertar elementos en la cola
void insertarCola(Nodo *&frente,Nodo *&fin,int n){
	Nodo *nuevo_nodo = new Nodo();

	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = NULL;

	if(cola_vacia(frente)){
		frente = nuevo_nodo;
	}
	else{
		fin->siguiente = nuevo_nodo;
	}

	fin = nuevo_nodo;
}

//Función para determinar si la cola está vacia
bool cola_vacia(Nodo *frente){
	return (frente == NULL)? true : false;
}

//Función para eliminar elementos de la cola
void suprimirCola(Nodo *&frente,Nodo *&fin,int &n){
	n = frente->dato;
	Nodo *aux = frente;

	if(frente == fin)
    {
		frente = NULL;
		fin = NULL;
	}
	else
    {
		frente = frente->siguiente;
        cout<<frente->dato<<" "<<endl;
	}
	delete aux;
}

void bfs(Nodo *&frente, Nodo *&fin, int &datoBuscar)
{
    Nodo *actual = frente;
    int encontrado = 0;

    while (actual != NULL)
    {
        if (actual->dato == datoBuscar)
        {
            encontrado = 1;
            break;
        }

        actual = actual->siguiente;
        cout<<actual->dato<<endl;
    }

    if (encontrado == 1)
    {
        cout << "Se encontró el valor: " << datoBuscar << endl;
    }
    else
    {
        cout << "No se encontró el valor: " << datoBuscar << endl;
    }
}