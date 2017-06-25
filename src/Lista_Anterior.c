#include "miLista.h"
#include "stdio.h"

ElementoLista *Lista_Anterior(ListaEnlazada *lista, ElementoLista *elemento){
  int tamano = Lista_Conteo(lista);
  if (tamano == 0) {							//La función retornará el elemento que está en la 
    return NULL;								//posición anterior al elemento que tenemos como
  }												//parámetro.
  ElementoLista *anterior = elemento->anterior;
  return anterior;
}
