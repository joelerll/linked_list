#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "miLista.h"

void ImprimirLista(ListaEnlazada *lista, int numeroElementos);

int main(int argc, char const *argv[]) {
  //Creación de lista
  ListaEnlazada lista;
  int numeroElementos = 6;
  memset(&lista, 0, sizeof(ListaEnlazada)); // llenar de veros la lista
  Lista_Inicializar(&lista);

  //Prueba Lista_InsertarInicio, CORRECTO.
  Lista_InsertarInicio(&lista, (void *)1);
  Lista_InsertarInicio(&lista, (void *)2);
  Lista_InsertarInicio(&lista, (void *)3);
  
  ListaEnlazada *li = &lista;
  ElementoLista ancla = li->ancla;
  ElementoLista *ancla_p = &ancla;
  ElementoLista *ant = ancla_p->anterior;
  ElementoLista *sig = ancla_p->siguiente;
  printf("Primer objeto: %i\n",(int)sig->objeto);
  printf("Ultimo objeto: %i\n",(int)ant->objeto);

  //Prueba Lista_Primero, CORRECTO.
  ElementoLista *primero = Lista_Primero(li);
  ElementoLista *segundo = Lista_Siguiente(li,primero);
  printf("Primer objeto: %i\n",(int)primero->objeto);
  //Prueba Lista_Siguiente, CORRECTO.
  ElementoLista *siguiente = Lista_Siguiente(li,primero);
  printf("Objeto siguiente a primer objeto: %i\n",(int)siguiente->objeto);
  //Prueba Lista_Anterior, CORRECTO.
  ElementoLista *anterior = Lista_Siguiente(li,segundo);
  printf("Objeto anterior a segundo objeto(2): %i\n",(int)anterior->objeto);
  //  	

  //printf("lista: %p\n", &lista);
  /*
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
  */

  return 0;

}
