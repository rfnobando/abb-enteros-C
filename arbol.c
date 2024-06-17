#include <stdio.h>
#include <stdlib.h>

#include "arbol.h"


struct Nodo {
    int dato;
    NodoPtr izquierdo;
    NodoPtr derecho;
};


NodoPtr crearNodo(int dato) {
    NodoPtr nodo = (NodoPtr)malloc(sizeof(struct Nodo));

    nodo->dato = dato;
    nodo->izquierdo = NULL;
    nodo->derecho = NULL;

    return nodo;
}

void mostrarNodo(NodoPtr nodo) {
    if(nodo != NULL) {
        printf("{ %d }", nodo->dato);
    } else {
        printf("EL NODO ESTA VACIO\n");
    }
}




void insertar(NodoPtr nodo, int dato) {
    if(dato == nodo->dato) {
        printf("\nEl elemento %d ya existe en el arbol\n", dato);
    }

    if(dato < nodo->dato) {
        if(nodo->izquierdo == NULL) {
            nodo->izquierdo = crearNodo(dato);
        } else {
            insertar(nodo->izquierdo, dato);
        }
    }

    if(dato > nodo->dato) {
        if(nodo->derecho == NULL) {
            nodo->derecho = crearNodo(dato);
        } else {
            insertar(nodo->derecho, dato);
        }
    }
}


void preorden(NodoPtr nodo) {
    if(nodo != NULL) {
        printf("{ %d }", nodo->dato);
        preorden(nodo->izquierdo);
        preorden(nodo->derecho);
    }
}


void inorden(NodoPtr nodo) {
    if(nodo != NULL) {
        inorden(nodo->izquierdo);
        printf("{ %d }", nodo->dato);
        inorden(nodo->derecho);
    }
}


void postorden(NodoPtr nodo) {
    if(nodo != NULL) {
        postorden(nodo->izquierdo);
        postorden(nodo->derecho);
        printf("{ %d }", nodo->dato);
    }
}


NodoPtr buscar(NodoPtr nodo, int dato) {
    if(nodo == NULL) {
        printf("EL ELEMENTO NO EXISTE EN EL ARBOL\n");
        return NULL;
    } else if(dato == nodo->dato) {
        printf("ENCONTRADO\n");
        return nodo;
    } else if(dato < nodo->dato) {
        printf("NO ENCONTRADO, SE BUSCA EN EL SUBARBOL IZQUIERDO\n");
        return buscar(nodo->izquierdo, dato);
    } else {
        printf("NO ENCONTRADO, SE BUSCA EN EL SUBARBOL DERECHO\n");
        return buscar(nodo->derecho, dato);
    }
}


int getDato(NodoPtr nodo) {
    return nodo->dato;
}




