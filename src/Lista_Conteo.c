#include "miLista.h"
int Lista_Conteo(ListaEnlazada *lista) {
  if (lista) { 
    return lista->numeroElementos;	//La función retornará el número elemento que contiene
  }									//la lista.
  return -1;
}
