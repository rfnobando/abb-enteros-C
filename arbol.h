#ifndef ARBOL_H_INCLUDED
#define ARBOL_H_INCLUDED


struct Nodo;
typedef struct Nodo * NodoPtr;


NodoPtr crearNodo(int dato);
void mostrarNodo(NodoPtr nodo);

void insertar(NodoPtr nodo, int dato);

void preorden(NodoPtr nodo);
void inorden(NodoPtr nodo);
void postorden(NodoPtr nodo);
NodoPtr buscar(NodoPtr nodo, int dato);

int getDato(NodoPtr nodo);



#endif // ARBOL_H_INCLUDED
