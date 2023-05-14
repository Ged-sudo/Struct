#include <stdio.h>
#include <stdlib.h>
#include "node.h"

int main(int argc, const char * argv[]) {
    
    Data test[] = {21, 17, 10, 11, 12, 13};
    Node * list  = NULL;
    
    //push(Node **plist, Data value)
    //pop(Node **plist)
    //printList(Node *list)
    //is_empty(Node *list)
    //getLast(Node *list)
    //getNthelement(Node *list, int n)
    //pushBack(Node *list, Data value)
    //delBack(Node **plist)
    //countElement(Node *plist)
    
    for (size_t i = 0; i < sizeof(test)/sizeof(test[0]); i++) {
        push(&list, test[i]);
    }
    printList(list);
    printf("pop(%d) \n",pop(&list));
    printList(list);
    printf("Empty : %s\n", is_empty(list) ? "YES" : "NO");
    printList(list);
    printf("Last element is %d \n", getLast(list)->data);
    printList(list);
    printf("element by number 2 is %d \n", getNthelement(list, 2)->data);
    printList(list);
    pushBack(list, 14);
    printList(list);
    delBack(&list);
    printList(list);
    printf("count element is %d \n", countElement(list));
    
    return 0;
}
