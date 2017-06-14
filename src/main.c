#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "miLista.h"
// ImprimirLista(ListaEnlazada *lista, int numeroElementos);
int main(int argc, char const *argv[]) {
  ListaEnlazada lista;
  int numeroElementos = 4;
  memset(&lista, 0, sizeof(ListaEnlazada)); // llenar de veros la lista
  Lista_Inicializar(&lista);
  long i = 2;
	for (i = 2; i < numeroElementos; i++){
		Lista_InsertarFin(&lista, (void *)i);
	}
  int tam = Lista_Conteo(&lista);
  printf("%d\n", tam);
  return 0;
}

// void ImprimirLista(ListaEnlazada *lista, int numeroElementos){
//
// 	if (Lista_Conteo(lista) != numeroElementos){
// 		printf("ImprimirLista: Error. Numero de elementos en lista incorrecto\n");
// 		exit(-1);
// 	}
//
// 	ElementoLista *elem = NULL;
//
// 	for (elem = Lista_Primero(lista); elem != NULL; elem = Lista_Siguiente(lista, elem)) {
//
// 		printf("%lu\n", (long)elem->objeto);
// 	}
// }
