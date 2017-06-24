#include <stdlib.h>
#include <stdio.h>
#include "miLista.h"

ElementoLista *Lista_Buscar(ListaEnlazada *lista, void *objeto){

	if(lista->numeroElementos!=0){

  		ElementoLista *elem = NULL;

		for (elem = Lista_Primero(lista); elem != NULL; elem = Lista_Siguiente(lista, elem)) {
			//printf("%lu - %lu\n", (long)objeto,(long)elem->objeto);
		    if(elem->objeto==objeto){
		    	return elem;
		    }
		}

	}
	return NULL;

}