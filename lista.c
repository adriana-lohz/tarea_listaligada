//aquí especifico mis funciones

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "lista.h"

//para hacer un nuevo nodo
Node * newNode(int val){
	Node * nodo = (Node *) malloc(sizeof(Node));
	assert(nodo != NULL);
	nodo->val = val;
	nodo->next = NULL;
	return nodo;
}

//para la length de la iteración 
int len_iter(Node * nodo){
	int count;
	if (nodo == NULL){
		return 0;
	}
	count = 0;
	while (nodo != NULL){
		count ++;
		nodo = nodo->next;
	}
	return count;
}

//para la length del recursivo
int len_rec(Node * nodo){
	if (nodo == NULL)
		return 0;
	else 
		return 1 + len_rec(nodo->next);
}

//encuentra el valor máximo de la lista
int max(Node * nodo){ //nodo es un apuntador hacia un elemento del tipo Node
	int max;
	if (nodo == NULL){
		return 0;
	}
	max = 0;
	while (nodo != NULL){
		if (max < nodo->val){
			max = nodo->val;
		}
		nodo = nodo->next;
	}
	return max;
}

//encuentra la lista inversa
Node * inversa(Node * nodo){
	Node * inversa = NULL; //inversa es el apuntador hacia una lista (lista que será la inversa de la original)
	while(nodo != NULL){
		Node * nodoAux = newNode(nodo->val);
		nodoAux->next = inversa; //nodo auxnext apunta a inversa
		inversa = nodoAux;
		nodo = nodo->next; 
	}
	return inversa;
}

//imprime una lista
void printList(Node * list){
	if(list != NULL){
		printf("[");
		for(; list != NULL; list = list->next){ //for recive 3 argumentos, hence el primer ";"
			printf("%d %c", list->val, list->next != NULL ? ',' :']');
		}
		printf("\n");
	}
	else
		printf("Es vacía.\n");
}


