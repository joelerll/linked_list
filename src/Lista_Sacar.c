#include <stdlib.h>
#include <stdio.h>
#include "miLista.h"

void Lista_Sacar(ListaEnlazada *lista, ElementoLista *elemento){

	if(lista->numeroElementos==0){
		return;
	}

	if(lista->numeroElementos==1){
		ElementoLista *ancla= (elemento->anterior);
		ancla->siguiente=NULL;
		ancla->anterior=NULL;
		lista->numeroElementos = 0;
		return;
	}

	ElementoLista *tmpAnterior = elemento->anterior;
	ElementoLista *tmpSiguiente = elemento->siguiente;

	tmpAnterior->siguiente=tmpSiguiente;
	tmpSiguiente->anterior=tmpAnterior;
	lista->numeroElementos--;
}
