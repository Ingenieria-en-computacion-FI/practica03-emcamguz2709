#include "nodo.h"
#include <stdlib.h>
#include <stdio.h>

Nodo* crearNodo(int valor){
    Nodo *n = (Nodo*)malloc(sizeof(Nodo));
    n->valor = valor; //-> es para acceder a los datos miembro de un valor cuando ese valor es un apuntador
    return n;
}

int obtenerValor(const Nodo *n){
    return n->valor;
}

void asignarValor(Nodo *n, int v){
    if(!n) return; //si n es nulo se regresa
    n->valor = v;
}
void destruirNodo(Nodo *n){
    if(!n) return; //si n es nulo se regresa
    free(n); //libera la memoria de n pero no asigna nada
  
}

