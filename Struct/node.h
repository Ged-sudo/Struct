#include <stdio.h>

typedef int Data;
typedef struct Node Node;

// Struct Item of list
struct Node {
    Data data;
    Node * next;
};


Node * list = NULL;

void push(Node ** list, Data x);
//Node * posh (Node * list, Data x);
Data pop(Node ** list);


void printList(Node * list) {
    for (Node * p = list; p!= NULL; p = p->next) {
        printf("%d, ", p->data);
    }
}
