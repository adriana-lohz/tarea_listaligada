
typedef struct Node {
	int val;
	struct Node * next;
} Node;



Node * newNode(int val);

int len_iter(Node * nodo);

int len_rec(Node * nodo);

int max(Node * nodo);

Node * inversa(Node * nodo);

void printList(Node * list);
