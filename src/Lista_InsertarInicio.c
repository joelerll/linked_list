#include "miLista.h"
#include <stdio.h>
#include <stdlib.h>

int Lista_InsertarInicio(ListaEnlazada *lista, void *objeto){
  ElementoLista *nuevo = (ElementoLista *)malloc(sizeof(ElementoLista));
  if (!nuevo)
    return 0;
  nuevo->objeto = objeto;
  if (lista->numeroElementos == 0) {
    ElementoLista *ancla = &(lista->ancla);
    ancla->anterior = nuevo;
    ancla->siguiente = nuevo;
    nuevo->siguiente = ancla;
    nuevo->anterior = ancla;
  } else {
    ElementoLista *ancla = &(lista->ancla);
    ElementoLista *primero = ancla->siguiente;
    primero->anterior = nuevo;
    nuevo->siguiente = primero;
    nuevo->anterior = ancla;
    ancla->siguiente = nuevo;
  }
  lista->numeroElementos++;
  return 1;
}
