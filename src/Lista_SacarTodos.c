#include "miLista.h"
#include <stdio.h>
#include <stdlib.h>

void Lista_SacarTodos(ListaEnlazada *lista){

  ElementoLista *ancla = &(lista->ancla);

  ancla->anterior = NULL;
  ancla->siguiente = NULL;

  lista->numeroElementos=0;

}
