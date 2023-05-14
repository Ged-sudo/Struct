#include <stdio.h>
#include <stdlib.h>
#include "node.h"

int main(int argc, const char * argv[]) {
    
    Data test[] = {21, 17, 10};
    Node * list  = NULL;
    
//    printf("Empty : %s\n", is_empty(list) ? "YES" : "NO");
//    printList(list);

    for (size_t i = 0; i < sizeof(test)/sizeof(test[0]); i++) {
        push(&list, test[i]);
    }

    printf("\n");
    printList(list);
    
    printf("%d \n",getLast(list)->data);
    printf("%d \n", getNthelement(list, 1)->data);
    pushBack(list, 11);
    printList(list);
    getLastButOne(list);
    popBack(&list);
    printList(list);
    
//    printf("Empty : %s\n\n", is_empty(list) ? "YES" : "NO");
//
//    while (!is_empty(list)) {
//        Data d = pop(&list);
//        printf("pop %d : ", d);
//        printList(list);
//    }
//
//    printf("Empty : %s\n\n", is_empty(list) ? "YES" : "NO");
//    printf("\n");

    return 0;
}
