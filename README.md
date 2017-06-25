<center> <h1>Proyecto Primer Termino Programacion de Sistemas</h1> </center>

## Intregrantes

* Bosco Andrade  [Boscoand](https://github.com/Boscoand)
* Joel Rodriguez  [joelerll](https://github.com/joelerll)
* Israel Cano  [IsraelCanoG](https://github.com/IsraelCanoG)

## Descripcion
Implementacion de listas doblemente enlazadas con un ancla que indica el inicio y fin de la lista

## Como compilar
Para crear el ejecutable y la libreria objeto compartida se debe ejecutar:

```sh
> make
```

Esto creara el ejecutable en la carpeta bin/ y la liberia compartida en la carpeta lib/

## Como usar el watcher

El archivo es para que ejecute un comando cuando cambia un archivo en cualquier carpeta que escojamos, el formato es:

```sh
$ ./watcher [carpeta] [comando]
```

Para el proyecto se usara

```sh
$ ./watcher src/ make test
```
