#include <stdio.h>
#include <stdlib.h>
#include "node.h"

int main(int argc, const char * argv[]) {
    Node a = {3}, b = {17}, c = {21}, t = {10};
    Node * list = &a;
    a.next = &b;
    b.next = &c;
    c.next = NULL;
    
    
    printf("%d = a, %d = b, %d = c \n", a.data, b.data, c.data);
    
    
    printList(list);
//    for (Node * p = list; p!= NULL; p = p->next) {
//        printf("%d, ", p->data);
//    }
//    p = p->next;
//    printf("%d = b, ", p->data);
//    p = p->next;
//    printf("%d = c \n", p->data);
//
    printf("\n");
    return 0;
}
