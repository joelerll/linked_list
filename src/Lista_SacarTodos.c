#include "miLista.h"
#include <stdio.h>
#include <stdlib.h>

void Lista_SacarTodos(ListaEnlazada *lista){

  ElementoLista *ancla = &(lista->ancla);
  ElementoLista *elem;

  for (elem = Lista_Primero(lista); elem != NULL; elem = Lista_Siguiente(lista, elem)) {
    free(elem);
  }

  ancla->anterior = NULL;
  ancla->siguiente = NULL;

  lista->numeroElementos=0;

}
