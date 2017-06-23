#include <stdlib.h>
#include "miLista.h"

ElementoLista *Lista_Buscar(ListaEnlazada *lista, void *objeto){

	if(lista->numeroElementos!=0){

  		ElementoLista *elem = NULL;

		for (elem = Lista_Primero(lista); elem->objeto != NULL; elem = Lista_Siguiente(lista, elem)) {
		    if(elem->objeto==objeto){
		    	return elem;
		    }
		}

	}
	return NULL;


}