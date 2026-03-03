#include<iostream>
using namespace std;

struct Nodo{
	int dato;
	Nodo* izq;
	Nodo* der;
};


void preorden(Nodo * raiz){
	if(raiz == NULL){
		return;	
	}
	
	cout<<raiz->dato<<",";
	preorden(raiz->izq);
	preorden(raiz->der);
}

void inorden(Nodo * raiz){
	if(raiz == NULL){
		return;
	}
	
	inorden(raiz->izq);
	cout<<raiz->dato<<",";
	inorden(raiz->der);
}

void postorden(Nodo * raiz){
	if(raiz == NULL){
		return;
	}
	
	postorden(raiz->izq);
	postorden(raiz->der);
	cout<<raiz->dato<<",";
}

int totalnodos(Nodo* nodo){
	if(nodo == NULL){
		return 0;
	}
	return 1 + totalnodos(nodo->izq) + totalnodos(nodo->der);
}

int Hojas(Nodo* nodo){
	if(nodo == NULL){
		return 0;
	}
	
	if(nodo->izq == NULL && nodo->der == NULL){
		return 1;
	}
	return Hojas(nodo->izq)+Hojas(nodo->der);
}


int main(){
	
	Nodo* raiz = NULL;
	Nodo *nodo1, *nodo2, *nodo3, *nodo4, *nodo5, *nodo6, *nodo7, *nodo8;
	
	nodo1 = new Nodo;
	nodo2 = new Nodo;
	nodo3 = new Nodo;
	nodo4 = new Nodo;
	nodo5 = new Nodo;
	nodo6 = new Nodo;
	nodo7 = new Nodo;
	nodo8 = new Nodo;
	
	nodo1->dato = 20;
	nodo2->dato = 10;
	nodo3->dato = 30;
	nodo4->dato = 5;
	nodo5->dato = 15;
	nodo6->dato = 40;
	nodo7->dato = 12;
	nodo8->dato = 11;
	
	raiz = nodo1;
	nodo1->izq = nodo2;
	nodo1->der = nodo3;
	nodo2->izq = nodo4;
	nodo2->der = nodo5;
	nodo3->izq = NULL;
	nodo3->der = nodo6;
	nodo4->izq = NULL;
	nodo4->der = NULL;
	nodo5->izq = nodo7;
	nodo5->der = NULL;
	nodo6->izq = NULL;
	nodo6->der = NULL;
	nodo7->izq = nodo8;
	nodo7->der = NULL;
	nodo8->izq = NULL;
	nodo8->der = NULL;
	
	cout<<"Preorden: ";
	preorden(raiz);
	cout<<endl;
	cout<<"Inorden: ";
	inorden(raiz);
	cout<<endl;
	cout<<"Postorden: ";
	postorden(raiz);
	cout<<endl;
	
	cout<<"Total de nodos: "<<totalnodos(raiz)<<endl;
	cout<<"Total de nodos hoja: "<<Hojas(raiz)<<endl;
	return 0;
}

