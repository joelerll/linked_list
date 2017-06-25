#include "miLista.h"
#include <stdio.h>

ElementoLista *Lista_Primero(ListaEnlazada *lista) {
  int tamano = Lista_Conteo(lista);
  if (tamano == 0) {						 //La función retornará el elemento que está en la 
    return NULL;							 //primera posición de la lista, es decir, la que se
  }											 //encuentra después del elemento ancla.
  ElementoLista *ancla = &(lista->ancla);
  ElementoLista *primero = ancla->siguiente;
  return primero;
}
