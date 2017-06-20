#include "miLista.h"
#include "stdio.h"

ElementoLista *Lista_Siguiente(ListaEnlazada *lista, ElementoLista *elemento){
  int tamano = Lista_Conteo(lista);
  if (tamano == 0) {
    return NULL;
  }
  ElementoLista *siguiente = elemento->siguiente;
  return siguiente;
}
