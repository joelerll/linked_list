#include "miLista.h"
int Lista_Conteo(ListaEnlazada *lista) {
  if (lista) { // verificar que la lista no sea null
    return lista->numeroElementos;
  }
  return -1;
}
