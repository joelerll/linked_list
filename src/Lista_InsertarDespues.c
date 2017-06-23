#include "miLista.h"

int Lista_InsertarDespues(ListaEnlazada *lista, void *objeto, ElementoLista *elemento){

	if(lista->numeroElementos!=0){


		ElementoLista *nuevo = (ElementoLista *)malloc(sizeof(ElementoLista));
		ElementoLista *tmp = elemento->siguiente;
		nuevo->objeto=objeto;
		nuevo->siguiente=elemento->siguiente;
		nuevo->anterior=elemento;
		elemento->siguiente=nuevo;
		tmp->anterior=nuevo;
			
		return 1;

	}
	return 0;


}