#include <stdlib.h>
#include "miLista.h"

int Lista_InsertarAntes(ListaEnlazada *lista, void *objeto, ElementoLista *elemento){
	if(lista->numeroElementos!=0){
		ElementoLista *nuevo = (ElementoLista *)malloc(sizeof(ElementoLista));
		ElementoLista *tmp = elemento->anterior;
		nuevo->objeto=objeto;			//La función insertará un nuevo elemento con su respectivo
		nuevo->siguiente=elemento;		// objeto (valor) una posición antes del elemento que tenemos como parámetro,
		nuevo->anterior=tmp;			//donde el puntero siguiente del nuevo elemento apuntará 
		elemento->anterior=nuevo;		// al elemento que tenemos como  parámetro y el puntero anterior 
		tmp->siguiente=nuevo;			//del nuevo elemento apuntará hacia el elemento anterior(tmp)   
		lista->numeroElementos++;		//que estaba aputando el elemento que tenemos como parámetro.
		return 1;						// Finalmente el puntero siguiente del elemento anterior(tmp) 
	}									//y el puntero anterior del elemento que tenemos como parámetro,
	return 0;							//apuntarán al nuevo elemento.
}
