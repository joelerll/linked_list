<center> <h1>Proyecto Primer Termino Programación de Sistemas</h1> </center>

## Intregrantes

* Bosco Andrade  [Boscoand](https://github.com/Boscoand)
* Joel Rodriguez  [joelerll](https://github.com/joelerll)
* Israel Cano  [IsraelCanoG](https://github.com/IsraelCanoG)

## Descripción
Implementación de listas doblemente enlazadas con un ancla que indica el inicio y fin de la lista

## Como compilar
Para crear el ejecutable y la librería objeto compartida se debe ejecutar:

```sh
$ make
```

Esto creara el ejecutable en la carpeta bin/ y la librería compartida en la carpeta lib/, tambien los archivo objeto de cada .c

## Set Enviroment variable

Si con make no anade la variable de entorno, anadirla manualmente

```sh
$ export LD_LIBRARY_PATH=$(pwd)/lib:$LD_LIBRARY_PATH
```

## Como usar el watcher

El archivo es para que ejecute un comando cuando cambia un archivo en cualquier carpeta que escojamos. El formato es:

```sh
$ ./watcher [carpeta] [comando]
```

Para el proyecto se usara

```sh
$ ./watcher src/ make test
```
