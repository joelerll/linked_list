#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "miLista.h"

void ImprimirLista(ListaEnlazada *lista);

int main(int argc, char const *argv[]) {
  //Creación de lista
  ListaEnlazada lista;
  //int numeroElementos = 6;
  //memset(&lista, 0, sizeof(ListaEnlazada)); // llenar de veros la lista
  Lista_Inicializar(&lista);

  //Prueba Lista_Vacio
  printf("ListaVacia: %i\n",Lista_Vacia(&lista));

  //Prueba Lista_InsertarInicio, CORRECTO.
  Lista_InsertarInicio(&lista, (void *)1);
  Lista_InsertarInicio(&lista, (void *)2);
  Lista_InsertarInicio(&lista, (void *)3);
  
  //Prueba Lista_Vacio
  printf("ListaVacia: %i\n",Lista_Vacia(&lista));

  ListaEnlazada *li = &lista;
  ElementoLista ancla = li->ancla;
  ElementoLista *ancla_p = &ancla;
  ElementoLista *ant = ancla_p->anterior;
  ElementoLista *sig = ancla_p->siguiente;
  printf("Primer objeto: %i\n",(int)sig->objeto);
  printf("Ultimo objeto: %i\n",(int)ant->objeto);


  ImprimirLista(li);

  //Prueba Lista_Primero, CORRECTO.
  ElementoLista *primero = Lista_Primero(li);
  ElementoLista *segundo = Lista_Siguiente(li,primero);
  printf("Primer objeto: %i\n",(int)primero->objeto);
  //Prueba Lista_Siguiente, CORRECTO.
  ElementoLista *siguiente = Lista_Siguiente(li,primero);
  printf("Objeto siguiente a primer objeto: %i\n",(int)siguiente->objeto);
  //Prueba Lista_Anterior, CORRECTO.
  ElementoLista *anterior = Lista_Anterior(li,segundo);
  printf("Objeto anterior a segundo objeto(2): %i\n",(int)anterior->objeto);
  //Prueba Lista_Sacar, CORRECTO.
  Lista_Sacar(li,Lista_Primero(li));
  ElementoLista *primero1 = Lista_Primero(li);
  printf("Se sacó primer objeto. Primer objeto nuevo es: %i\n",(int)primero1->objeto);
  ImprimirLista(li);
  //Prueba Lista_IntertarDespues, CORRECTO.
  Lista_InsertarDespues(li,(void *)5,Lista_Primero(li));
  ElementoLista *nuevo = Lista_Siguiente(li,Lista_Siguiente(li,Lista_Primero(li)));
  printf("Se insertó 5 después de primer objeto. Elemento despues de 5 es: %i\n",(int)nuevo->objeto);
  ImprimirLista(li);

//Prueba Lista_IntertarAntes, CORRECTO.
  Lista_InsertarAntes(li,(void *)6,Lista_Primero(li));
//  ElementoLista *nuevo = Lista_Siguiente(li,Lista_Siguiente(li,Lista_Primero(li)));
//  printf("Se insertó 5 después de primer objeto. Elemento despues de 5 es: %i\n",(int)nuevo->objeto);
  printf("Se insertó 6 antes del tercero\n");
  ImprimirLista(li);

  //prueba Lista_Buscar
  ElementoLista *elementoBuscado = Lista_Buscar(li,(void *)1);
  printf("Se encontró elemento: %i\n",(int)elementoBuscado->objeto);
  //prueba Lista_SacarTodos
  Lista_SacarTodos(li);
  ImprimirLista(li);
  Lista_InsertarInicio(li, (void *)2);
  Lista_InsertarInicio(li, (void *)2);
  Lista_InsertarInicio(li, (void *)2);
  Lista_InsertarInicio(li, (void *)2);
  ImprimirLista(li);



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

void ImprimirLista(ListaEnlazada *lista){


  if(lista->numeroElementos!=0){
    ElementoLista *elem = NULL;

    for (elem = Lista_Primero(lista); elem->objeto != NULL; elem = Lista_Siguiente(lista, elem)) {
      printf("%lu\n", (long)elem->objeto);
    }  
  }else{
    printf("VACIO\n");
  }

  
}
