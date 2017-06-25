#include "miLista.h"
#include <stdio.h>
#include <stdlib.h>

void Lista_SacarTodos(ListaEnlazada *lista){

  ElementoLista *ancla = &(lista->ancla);
  ElementoLista *elem;

  for (elem = Lista_Primero(lista); elem != NULL; elem = Lista_Siguiente(lista, elem)) {
    free(elem);
  }								//La función sacará a todos los elemento de la lista,
  								//para éste proceso solo debemos hacer que el el puntero
  ancla->anterior = NULL;		//siguiente y el puntero anterior del elemento ancla,
  ancla->siguiente = NULL;		// apunten a NULL.

  lista->numeroElementos=0;

}
