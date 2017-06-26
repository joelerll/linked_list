# gcc configuracion
INCLUDE= -Iinclude/
CFLAGS = -Wall -fPIC
CC = gcc
SHARED = -shared
CCFLAGS = -Wl

# folder estructura
SRCDIR   = src
OBJDIR   = obj
BINDIR   = bin
LIBDIR = lib
BIN_NAME = bin/prueba

# objects
MAIN_OBJ= obj/main.o
PRUEBA_OBJ= obj/pruebaLista.o
MAIN=src/pruebaLista.c

# sources list
CURRENT_FOLDER := $(shell pwd)
SOURCES  := $(shell ls src | sed 's/\b.c\b/.o/'| egrep '^[A-Z]'| tr "\n" " ")
OBJECTS := $(shell ls src | egrep '^[A-Z]' | sed 's/\b.c\b/.o/'| sed 's/^/obj\//' | tr "\n" " ")
SOURCES_DINAMICO := $(shell ls src | egrep '^[A-Z]'| sed 's/^/src\//' | tr "\n" " ")

all: prueba

help:
	@fgrep -h "####" $(MAKEFILE_LIST) | fgrep -v fgrep | sed -e 's/pruebaLista.o//'  | sed -e 's/(SOURCES)//' | sed -e 's/####//'

prueba: libmilista.so include/miLista.h pruebaLista.o
	@ echo "Creado el ejecutable prueba"
	@ gcc -L$(CURRENT_FOLDER)/$(LIBDIR) $(CCFLAGS),-rpath=$(CURRENT_FOLDER)/$(LIBDIR) -Wall -o $(BIN_NAME) $(PRUEBA_OBJ) -lmilista
	@ # gcc $(CFLAGS) $(INCLUDE) -L$(CURRENT_FOLDER)/lib $(MAIN) -lmilista -o $(BIN_NAME)

# Usado para pruebas locales
test: $(SOURCES) main.o
	gcc $(OBJECTS) $(MAIN_OBJ) -o $(BIN_NAME)

# Generar archivo objecto compartido
libmilista.so: $(SOURCES)
	@ $(CC) $(CFLAGS) $(INCLUDE) $(SHARED) $(OBJECTS) -o $(LIBDIR)/$@
	@ echo "Creada la libreria compartida milista"

# Generar pruebaLista.o
pruebaLista.o: $(MAIN)
	@ $(CC) $(CFLAGS) $(INCLUDE) -c $< -o $(OBJDIR)/$@

# Generar los archivos .o
%.o : $(SRCDIR)/%.c
	@ $(CC) $(CFLAGS) $(INCLUDE) -c $< -o $(OBJDIR)/$@

# Limpiar todos los archivos
.PHONY: clean

clean:
	@ rm -f obj/*.o bin/prueba lib/*.so
	@ echo "Borrado los archivos .o .so y ejecutables"

# https://stackoverflow.com/questions/7004702/how-can-i-create-a-makefile-for-c-projects-with-src-obj-and-bin-subdirectories
# http://www.cprogramming.com/tutorial/shared-libraries-linux-gcc.html#fn:1
# https://ftp.gnu.org/old-gnu/Manuals/make-3.79.1/html_chapter/make_10.html
# http://www.adp-gmbh.ch/cpp/gcc/create_lib.html#calc_mean_h
