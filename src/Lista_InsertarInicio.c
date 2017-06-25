#include "miLista.h"
#include <stdio.h>
#include <stdlib.h>

int Lista_InsertarInicio(ListaEnlazada *lista, void *objeto){
  ElementoLista *nuevo = (ElementoLista *)malloc(sizeof(ElementoLista));
  if (!nuevo)
    return 0;
  nuevo->objeto = objeto;
  if (lista->numeroElementos == 0) {           //La función inserterá un nuevo elemento al inicio de la
    ElementoLista *ancla = &(lista->ancla);    //lista, donde el puntero siguiente del nuevo elemento
    ancla->anterior = nuevo;                   //apuntará al elemento(primero) que se encontraba al inicio
    ancla->siguiente = nuevo;                  //de la lista y el puntero anterior del nuevo elemento
    nuevo->siguiente = ancla;                  //apuntará al elemento ancla. Finalmente el puntero siguiente
    nuevo->anterior = ancla;                   //del elemeto ancla y el puntero anterior del elemento(primero)
  } else {                                     //apuntarán al nuevo elemento.
    ElementoLista *ancla = &(lista->ancla);
    ElementoLista *primero = ancla->siguiente;
    primero->anterior = nuevo;
    nuevo->siguiente = primero;
    nuevo->anterior = ancla;
    ancla->siguiente = nuevo;
  }
  lista->numeroElementos++;
  return 1;
}
