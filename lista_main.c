
#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main(){
	Node * list = NULL; //list es un apuntador a un nodo (y nodo es una lista)
	int val;
	for(val=7; val>=0; val--){
		Node * n = newNode(val);
		n->next = list;
		list = n;
	}

	printf("length de iteración es %d \n", len_iter(list));
	printf("length de recursión es %d \n", len_rec(list));
	printf("max de la lista es %d \n", max(list));
	printf("la inversa de la lista es \n");
	printList(inversa(list));

//borro la memoria

	Node * nodoAux;
	while (list != NULL){
		nodoAux = list->next; //
		free(list);
		list = nodoAux;
	}	

return 0;

}


