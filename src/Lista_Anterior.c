#include "miLista.h"
#include "stdio.h"

ElementoLista *Lista_Anterior(ListaEnlazada *lista, ElementoLista *elemento){
  int tamano = Lista_Conteo(lista);
  if (tamano == 0) {
    return NULL;
  }
  ElementoLista *anterior = elemento->anterior;
  return anterior;
}
