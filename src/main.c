#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "miLista.h"
void ImprimirLista(ListaEnlazada *lista, int numeroElementos);
int main(int argc, char const *argv[]) {
  ListaEnlazada lista;
  int numeroElementos = 6;
  memset(&lista, 0, sizeof(ListaEnlazada)); // llenar de veros la lista
  Lista_Inicializar(&lista);
  long i = 2;
	for (i = 2; i < numeroElementos; i++){
		Lista_InsertarFin(&lista, (void *)i);
	}
  // printf("lista: %p\n", &lista);
  int tam = Lista_Conteo(&lista);
  printf("tamano: %d\n", tam);
  ListaEnlazada *li = &lista;
  ElementoLista ancla = li->ancla;
  ElementoLista *ancla_p = &ancla;
  ElementoLista *ant = ancla_p->anterior;
  ElementoLista *sig = ancla_p->siguiente;
  ElementoLista *intermedio = sig->siguiente;
  long a = (long)(ant->objeto);
  long s = (long)(sig->objeto);
  long inter = (long)(intermedio->objeto);
  printf("primero: %d\n", s);
  printf("intermedio: %d\n", inter);
  printf("ultimo: %d\n", a);
  return 0;
}
