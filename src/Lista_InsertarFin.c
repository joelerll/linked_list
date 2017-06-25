#include "miLista.h"
#include <stdio.h>
#include <stdlib.h>
int Lista_InsertarFin(ListaEnlazada *lista, void *objeto) {
  // definicion de Elementos de lista
  ElementoLista *nuevo = (ElementoLista *)malloc(sizeof(ElementoLista));
  if (!nuevo)
    return 0;
  nuevo->objeto = objeto;
  if (lista->numeroElementos == 0) {
    ElementoLista *ancla = &(lista->ancla);  //La función inserterá un nuevo elemento al final de la
    ancla->anterior = nuevo;                 //lista, donde el puntero siguiente del nuevo elemento
    ancla->siguiente = nuevo;                //apuntará al elemento ancla y el puntero anterior del nuevo
    nuevo->siguiente = ancla;                //elemento apuntará al elemento(ultimo) que se encontraba al
    nuevo->anterior = ancla;                 //final de la lista. Finalmente el puntero siguiente de 
  } else {                                   //ese elemento(ultimo) y el puntero anterior del elemento ancla
    ElementoLista *ancla = &(lista->ancla);  //apuntarán al nuevo elemento.
    ElementoLista *ultimo = ancla->anterior;
    nuevo->anterior = ultimo;
    nuevo->siguiente = ancla;
    ultimo->siguiente = nuevo;
    ancla->anterior = nuevo;
  }
  lista->numeroElementos++;
  return 1;
}
