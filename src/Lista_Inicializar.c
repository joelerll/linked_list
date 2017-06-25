#include "miLista.h"
#include <stdio.h>
#include <stdlib.h>

int Lista_Inicializar(ListaEnlazada *lista) {
  if (lista) {
    lista = (ListaEnlazada *)malloc(sizeof(ListaEnlazada));
    if (!lista)
      return 0;
    ElementoLista *ancla = (ElementoLista *)malloc(sizeof(ElementoLista));
    if (!ancla)
      return 0;                 //La función empezará creando un elemento(ancla) solo si la  
    ancla->siguiente = NULL;    //lista está vacía, donde el puntero siguiente,el puntero 
    ancla->anterior = NULL;     //anterior y el objeto del elemento(ancla), apuntarán a NULL.
    ancla->objeto = NULL;
    lista->ancla = *ancla;
    lista->numeroElementos = 0;
    return 1;
  }
  return 0;
}
