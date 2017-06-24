#include "miLista.h"
#include <stdio.h>

ElementoLista *Lista_Siguiente(ListaEnlazada *lista, ElementoLista *elemento){

	int tamano = Lista_Conteo(lista);
  	if (tamano == 0) {

    	return NULL;
  	}
    if(elemento->siguiente!=&(lista->ancla)){
		return elemento->siguiente;	
	}else{
		return NULL;
	}
}
