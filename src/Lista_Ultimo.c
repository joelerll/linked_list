#include "miLista.h"
#include "stdio.h"

ElementoLista *Lista_Ultimo(ListaEnlazada *lista) {
  int tamano = Lista_Conteo(lista);
  if (tamano == 0) {						  //La función retornará el elemento que está en la
    return NULL;							  //última posición de la lista, es decir, la que se
  }											  //encuentra antes del elemento ancla.
  ElementoLista *ancla = &(lista->ancla);
  ElementoLista *anterior = ancla->anterior;
  return anterior;
}
