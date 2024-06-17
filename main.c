#include <stdio.h>
#include <stdlib.h>

#include "arbol.h"


int main() {

    NodoPtr raiz = crearNodo(25);

    insertar(raiz, 28);
    insertar(raiz, 50);
    insertar(raiz, 18);
    insertar(raiz, 15);
    insertar(raiz, 16);
    insertar(raiz, 27);
    insertar(raiz, 3);
    insertar(raiz, 9);
    insertar(raiz, 27);


    printf("PREORDEN\n");
    preorden(raiz);
    printf("\n\n");

    printf("INORDEN\n");
    inorden(raiz);
    printf("\n\n");


    printf("POSTORDEN\n");
    postorden(raiz);
    printf("\n\n");

    NodoPtr buscado = buscar(raiz, 50);
    mostrarNodo(buscado);


    return 0;
}
