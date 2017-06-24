#include <stdlib.h>
#include "miLista.h"

int Lista_InsertarAntes(ListaEnlazada *lista, void *objeto, ElementoLista *elemento){

	if(lista->numeroElementos!=0){


		ElementoLista *nuevo = (ElementoLista *)malloc(sizeof(ElementoLista));
		ElementoLista *tmp = elemento->anterior;
		nuevo->objeto=objeto;
		nuevo->siguiente=elemento;
		nuevo->anterior=tmp;
		elemento->anterior=nuevo;
		tmp->siguiente=nuevo;
			
		lista->numeroElementos++;
		
		return 1;

	}
	return 0;


}