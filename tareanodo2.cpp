#include<iostream>
using namespace std;

struct Nodo{
    int dato;
    Nodo* izq;
    Nodo* der;
};

void preorden(Nodo* raiz){
    if(raiz == NULL){
        return;
    }
    cout<<raiz->dato<<",";
    preorden(raiz->izq);
    preorden(raiz->der);
}

void inorden(Nodo* raiz){
    if(raiz == NULL){
        return;
    }
    inorden(raiz->izq);
    cout<<raiz->dato<<",";
    inorden(raiz->der);
}

void postorden(Nodo* raiz){
    if(raiz == NULL){
        return;
    }
    postorden(raiz->izq);
    postorden(raiz->der);
    cout<<raiz->dato<<",";
}

int tot alnodos(Nodo* nodo){
        if(ndo == NULL){
            return 
        }
    return;
}
int main(){

    Nodo* raiz = NULL;
    Nodo *nodo1, *nodo2, *nodo3, *nodo4, *nodo5, *nodo6, *nodo7, *nodo8, *nodo9;

    nodo1 = new Nodo;
    nodo2 = new Nodo;
    nodo3 = new Nodo;
    nodo4 = new Nodo;
    nodo5 = new Nodo;
    nodo6 = new Nodo;
    nodo7 = new Nodo;
    nodo8 = new Nodo;
    nodo9 = new Nodo;

    nodo1->datos = 50;
    nodo2->datos = 30;
    nodo3->datos = 70;
    nodo4->datos = 20;
    nodo5->datos = 40;
    nodo6->datos = 60;
    nodo7->datos = 80;
    nodo8->datos = 10;
    nodo9->datos = 25;

    raiz = nodo1;
    nodo1->izq = nodo2;
    nodo1->der = nodo3;
    nodo2->izq = nodo4;
    nodo2->der = nodo5;
    nodo3->izq = nodo6;
    nodo3->der = nodo7;
    nodo4->izq = nodo8;
    nodo4->der = nodo9;
    nodo5->izq = NULL;
    nodo5->der = NULL;
    nodo6->izq = NULL;
    nodo6->der = NULL;
    nodo7->izq = NULL;
    nodo7->der = NULL;
    nodo8->izq = NULL;
    nodo8->der = NULL;
    nodo9->izq = NULL;
    nodo9->der = NULL;

    cout<<"Preorden: "<<preorden(raiz)<<endl;
    cout<<"Inorden: "<<inorden(raiz)<<endl;
    cout<<"Postorden: "<<postorden(raiz)<<endl;

    

    return 0;
}