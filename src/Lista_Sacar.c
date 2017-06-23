#include "miLista.h"

void Lista_Sacar(ListaEnlazada *lista, ElementoLista *elemento){

	ElementoLista *tmpAnterior = elemento->anterior;
	ElementoLista *tmpSiguiente = elemento->siguiente;

	tmpAnterior->siguiente=tmpSiguiente;
	tmpSiguiente->anterior=tmpAnterior;
	free(elemento);

}
