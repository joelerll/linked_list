#include "miLista.h"
#include "stdio.h"

ElementoLista *Lista_Ultimo(ListaEnlazada *lista) {
  int tamano = Lista_Conteo(lista);
  if (tamano == 0) {
    return NULL;
  }
  ElementoLista ancla = lista->ancla;
  ElementoLista *ancla_puntero = &ancla;
  ElementoLista *anterior_puntero = ancla_puntero->anterior;
  // void *obj = anterior_puntero->objeto;
  // printf("%d\n",(long)obj);
  // ElementoLista iterador;
  return anterior_puntero;
}
