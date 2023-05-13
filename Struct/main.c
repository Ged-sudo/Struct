#include <stdio.h>
#include <stdlib.h>
#include "node.h"

int main(int argc, const char * argv[]) {
    Data test[] = {21, 17, 10};
    Node * list  = NULL;
    
    for (size_t i = 0; i < sizeof(test)/sizeof(test[0]); i++) {
        push(&list, test[i]);
    }
    
    printList(list);
    printf("\n");
    
    return 0;
}
