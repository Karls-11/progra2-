#include<iostream>
using namespace std;
//Se crea la estructura del nodo
struct Nodo{
	int dato;
	Nodo* izq;
	Nodo* der;
};

void inorden(Nodo *raiz){
	if(raiz == NULL){ //si la raiz es null termina
		return;
	}
	// lo que corre si no es null
	inorden(raiz->izq); //izquierdo
	cout<<raiz->dato<<","; //raiz
	inorden(raiz->der); //derecha
}

void preorden(Nodo *raiz){
	if(raiz == NULL){
		return;
	}
	
	cout<<raiz->dato<<",";
	preorden(raiz->izq);
	preorden(raiz->der);
}

void postorden(Nodo *raiz){
	if(raiz == NULL){
		return;
	}
	
	postorden(raiz->izq);
	postorden(raiz->der);
	cout<<raiz->dato<<",";
}

int main(){
	Nodo* raiz = NULL;
	Nodo *nodo1, *nodo2, *nodo3, *nodo4, *nodo5, *nodo6, *nodo7;
	//Se crean los nodos.
	nodo1 = new Nodo;
	nodo2 = new Nodo;
	nodo3 = new Nodo;
	nodo4 = new Nodo;
	nodo5 = new Nodo;
	nodo6 = new Nodo;
	nodo7 = new Nodo;
	//guardar valores en los nodos.
	nodo1->dato = 100;
	nodo2->dato = 50;
	nodo3->dato = 150;
	nodo4->dato = 25;
	nodo5->dato = 75;
	nodo6->dato = 200;
	nodo7->dato = 30;
	//asignar punteros.
	raiz = nodo1;
	nodo1->izq = nodo2;
	nodo1->der = nodo3;
	nodo2->izq = nodo4;
	nodo2->der = nodo5;
	nodo3->izq = NULL;
	nodo3->der = nodo6;
	nodo4->izq = NULL;
	nodo4->der = nodo7;
	nodo5->izq = NULL;
	nodo5->der = NULL;
	nodo6->izq = NULL;
	nodo6->der = NULL;
	nodo7->izq = NULL;
	nodo7->der = NULL;
	
	cout<<"El recorrido inorden es: ";
	inorden(raiz);
	cout<<endl;
	cout<<"Recorrido en preorden: ";
	preorden(raiz);
	cout<<endl;
	cout<<"Recorrido en postorden: ";
	postorden(raiz);
	
	
	
	return 0;
}
