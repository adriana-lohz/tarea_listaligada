HEADERS = lista.h
default: listaLigada

lista.o: lista.c $(HEADERS)
	gcc -c lista.c -o lista.o
lista_main.o: lista_main.c $(HEADERS)
	gcc -c lista_main.c -o lista_main.o

listaLigada: lista.o lista_main.o
	gcc -o listaLigada lista.o lista_main.o
