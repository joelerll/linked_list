#include <stdlib.h>
#include <stdio.h>
#include "miLista.h"

ElementoLista *Lista_Buscar(ListaEnlazada *lista, void *objeto){
	if(lista->numeroElementos!=0){ 
  	ElementoLista *elem = NULL;
		for (elem = Lista_Primero(lista); elem != NULL; elem = Lista_Siguiente(lista, elem)) {
		  if(elem->objeto == objeto){	//La función retorná el elemento a buscar, se recorrerá
		    return elem;				//la lista desde su primer elemento hasta su último elemento,
		  }								//donde a cada elemento evaluaremos su objeto(valor) y lo
		}								//compararemos con el objeto(valor) que tenemos de parámetro,
	}									//en caso de ser iguales retornaremos el elemento.
	return NULL;
}
