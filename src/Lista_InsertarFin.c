#include "miLista.h"
#include <stdio.h>
#include <stdlib.h>
int Lista_InsertarFin(ListaEnlazada *lista, void *objeto) {
  // definicion de Elementos de lista
  ElementoLista *nuevo = (ElementoLista *)malloc(sizeof(ElementoLista));
  if (!nuevo)
    return 0;
  // int numero = Lista_Conteo(lista);
  // printf("%d\n",numero );
  // elemento->siguiente = NULL;
  nuevo->objeto = objeto;
  if (lista->numeroElementos == 0) {

    ElementoLista *ancla = &(lista->ancla);
    ancla->anterior = nuevo;
    ancla->siguiente = nuevo;

    // ElementoLista *ancla = (ElementoLista *)malloc(sizeof(ElementoLista));
    // if (!ancla)
    //   return 0;
    // ancla->siguiente = nuevo;
    // ancla->anterior = nuevo;
    // ancla->objeto = NULL;
    // lista->ancla = *ancla;
  } else {
    ElementoLista *ancla = &(lista->ancla);
    ElementoLista *ultimo = ancla->anterior;
    nuevo->anterior = ultimo;
    nuevo->siguiente = ancla;
    ultimo->siguiente = nuevo;
    ancla->anterior = nuevo;
  }
  lista->numeroElementos++;
  return 1;
}
