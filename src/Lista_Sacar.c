#include <stdlib.h>
#include <stdio.h>
#include "miLista.h"

void Lista_Sacar(ListaEnlazada *lista, ElementoLista *elemento){

	if(lista->numeroElementos==0){					  //La función sacará un elemento de la lista,
		return;										  //para éste proceso, los elementos anterior(tmpAnterior) 
	}												  //y siguiente(tmpSiguiente) del elemento que tenemos como
													  //parámetro deberán estar apuntándose.
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
