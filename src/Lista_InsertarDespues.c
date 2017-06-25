#include <stdlib.h>
#include "miLista.h"

int Lista_InsertarDespues(ListaEnlazada *lista, void *objeto, ElementoLista *elemento){
	if(lista->numeroElementos!=0){
		ElementoLista *nuevo = (ElementoLista *)malloc(sizeof(ElementoLista));
		ElementoLista *tmp = elemento->siguiente;
		nuevo->objeto=objeto;
		nuevo->siguiente=elemento->siguiente;
		nuevo->anterior=elemento;	   //La función insertará un nuevo elemento con su respectivo
		elemento->siguiente=nuevo;	   // objeto (valor) una posición después del elemento que tenemos 
		tmp->anterior=nuevo;		   //como parámetro, donde el puntero siguiente del nuevo elemento 
		lista->numeroElementos++;	   //apuntará el elemento siguiente(tmp) que estaba aputando el elemento
		return 1;					   //que tenemos como parámetro y el puntero anterior del nuevo elemento
	}								   //apuntará al elemento que tenemos como  parámetro. Finalmente 
	return 0;						   //el puntero siguiente del elemento que tenemos como  parámetro 
}									   //y el puntero anterior del elemento siguiente(tmp) apuntarán 
									   //al nuevo elemento.