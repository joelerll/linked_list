#include "miLista.h"
#include <stdio.h>

ElementoLista *Lista_Siguiente(ListaEnlazada *lista, ElementoLista *elemento){
	int tamano = Lista_Conteo(lista);			
  	if (tamano == 0) {							//La función retornará el elemento que está en la
    	return NULL;							//posición siguiente al elemento que tenemos como
  	}											//parámetro.
    if(elemento->siguiente!=&(lista->ancla)){
		return elemento->siguiente;
	}else{
		return NULL;
	}
}
