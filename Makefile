# gcc configuracion
INCLUDE= -Iinclude/
LIBS=-Llib/
CFLAGS = -Wall
CC = gcc
SHARED = -shared -fPIC

# folder estructura
SRCDIR   = src
OBJDIR   = obj
BINDIR   = bin
LIBDIR = lib
BIN_NAME := bin/prueba

# objects
MAIN_OBJ= obj/main.o
PRUEBA_OBJ= obj/pruebaLista.o

# sources list
SOURCES  := $(shell ls src | sed 's/\b.c\b/.o/'| egrep '^[A-Z]'| tr "\n" " ")
OBJECTS := $(shell ls src | egrep '^[A-Z]' | sed 's/\b.c\b/.o/'| sed 's/^/obj\//' | tr "\n" " ")
SOURCES_DINAMICO := $(shell ls src | egrep '^[A-Z]'| sed 's/^/src\//' | tr "\n" " ")

all: todos libmilista.so

todos: $(SOURCES) pruebaLista.o
	@#gcc $(OBJECTS) $(PRUEBA_OBJ) -o $(BIN_NAME)

# Usado paraa pruebas locales
test: $(SOURCES) main.o
	gcc $(OBJECTS) $(MAIN_OBJ) -o $(BIN_NAME)

libmilista.so:
	@ $(CC) $(CFLAGS) $(INCLUDE) $(SHARED) $(SOURCES_DINAMICO) -o $(LIBDIR)/$@
	@ echo "Creada la libreria compartida milista"

%.o : $(SRCDIR)/%.c
	@ $(CC) $(CFLAGS) $(INCLUDE) -c $< -o $(OBJDIR)/$@

.PHONY: clean
clean:
	@ rm -f obj/*.o bin/prueba lib/*.so
	@ echo "Borrado los archivos"

# https://stackoverflow.com/questions/7004702/how-can-i-create-a-makefile-for-c-projects-with-src-obj-and-bin-subdirectories
# http://www.cprogramming.com/tutorial/shared-libraries-linux-gcc.html#fn:1
# https://ftp.gnu.org/old-gnu/Manuals/make-3.79.1/html_chapter/make_10.html
