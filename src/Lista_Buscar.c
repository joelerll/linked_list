#include <stdlib.h>
#include <stdio.h>
#include "miLista.h"

ElementoLista *Lista_Buscar(ListaEnlazada *lista, void *objeto){
	if(lista->numeroElementos!=0){ // verificar si hay elementos en la lista
  	ElementoLista *elem = NULL;
		for (elem = Lista_Primero(lista); elem != NULL; elem = Lista_Siguiente(lista, elem)) {
		  if(elem->objeto == objeto){
		    return elem;
		  }
		}
	}
	return NULL;
}
