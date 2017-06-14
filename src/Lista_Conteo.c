#include "miLista.h"
int Lista_Conteo(ListaEnlazada *lista) {
  if (lista) {
    return lista->numeroElementos;
  }
  return -1;
}
