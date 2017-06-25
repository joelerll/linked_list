#include "miLista.h"

int Lista_Vacia(ListaEnlazada *lista){ 
  if(lista->numeroElementos==0){ 	   //La función verifica si la lista contiene elementos (retorna 1)
   	  return 1;						   // o si está vacía (retorna 0).
  }
   return 0;
}
