#include "miLista.h"
#include "stdio.h"

ElementoLista *Lista_Ultimo(ListaEnlazada *lista) {
  int tamano = Lista_Conteo(lista);
  if (tamano == 0) {
    return NULL;
  }
  ElementoLista *ancla = &(lista->ancla);
  ElementoLista *anterior = ancla->anterior;
  return anterior;
}
