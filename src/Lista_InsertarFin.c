#include "miLista.h"
#include <stdio.h>
#include <stdlib.h>
int Lista_InsertarFin(ListaEnlazada *lista, void *objeto) {
  // definicion de Elementos de lista
  ElementoLista *elemento = (ElementoLista *)malloc(sizeof(ElementoLista));
  if (!elemento)
    return 0;
  // int numero = Lista_Conteo(lista);
  // printf("%d\n",numero );
  // elemento->siguiente = NULL;
  elemento->objeto = objeto;
  if (lista->numeroElementos == 0) {

    // ElementoLista ancla = lista->ancla;
    // ElementoLista *ancla_puntero = &ancla;
    // ancla_puntero->anterior = elemento;
    // ancla_puntero->siguiente = elemento;

    ElementoLista *ancla = (ElementoLista *)malloc(sizeof(ElementoLista));
    if (!ancla)
      return 0;
    ancla->siguiente = elemento;
    ancla->anterior = elemento;
    ancla->objeto = NULL;
    lista->ancla = *ancla;
  } else {
    ElementoLista ancla = lista->ancla;
    ElementoLista *ancla_puntero = &ancla;
    ElementoLista *ultimo = Lista_Ultimo(lista);
    ultimo->siguiente = elemento;
    elemento->anterior = ultimo;
    elemento->siguiente = ancla_puntero;
    ancla_puntero->anterior = elemento;

  }
  lista->numeroElementos++;
  return 1;
}
