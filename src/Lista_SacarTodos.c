#include "miLista.h"
#include <stdio.h>
#include <stdlib.h>

void Lista_SacarTodos(ListaEnlazada *lista){

  ElementoLista *elem = NULL;

  for (elem = Lista_Primero(lista); elem->objeto != NULL; elem = Lista_Siguiente(lista, elem)) {
    free(elem);
  }

  ElementoLista *ancla = &(lista->ancla);

  ancla->anterior = NULL;
  ancla->siguiente = NULL;

  lista->numeroElementos=0;

}
