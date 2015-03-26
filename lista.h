//headers


typedef struct Node { //mi nodo
	int val;
	struct Node * next;
} Node;


//funciones para mi nodo

Node * newNode(int val);

int len_iter(Node * nodo);

int len_rec(Node * nodo);

int max(Node * nodo);

Node * inversa(Node * nodo);

void printList(Node * list);
