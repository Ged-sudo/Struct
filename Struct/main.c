#include <stdio.h>
#include <stdlib.h>
#include "node.h"

int main(int argc, const char * argv[]) {    
    Node a = {3}, b = {17}, c = {21}, t = {10};
    Node * list = &a;
    a.next = &b;
    b.next = &c;
    c.next = NULL;
   
    return 0;
}
