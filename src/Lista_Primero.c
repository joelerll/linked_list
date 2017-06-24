#include "miLista.h"
#include <stdio.h>

ElementoLista *Lista_Primero(ListaEnlazada *lista) {
  int tamano = Lista_Conteo(lista);
  
  if (tamano == 0) {
    return NULL;
  }
  ElementoLista *ancla = &(lista->ancla);
  ElementoLista *primero = ancla->siguiente;
  return primero;
}
