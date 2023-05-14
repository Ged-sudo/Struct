typedef int Data;
typedef struct Node Node;

// Struct Item of list
struct Node {
    int data;
    Node * next;
};

typedef struct {
    Node * tail;
    Node * head;
} Query;

void push(Node ** plist, Data x);
Data pop(Node ** list);
void printList(Node * list);
int is_empty(Node * list);
Node* getLast(Node *list);
Node* getNthelement(Node* list, int n);
Node* getLastButOne(Node* list);
void popBack(Node **list);


//print elements from list pointer вывести все элемементы списка
void printList(Node * list) {
    if (is_empty(list)) {
        printf("List is empty.");
    } else {
        for (Node * p = list; p!= NULL; p = p->next) {
            printf("%d, ", p->data);
        }
        printf("\n");
    }
}

//add item at first добавить элемент в начало списка
void push(Node ** plist, Data value) {
    Node * p = malloc(sizeof(Node));
    p->data = value;
    p->next = *plist;
    *plist = p;
}

//check empty проверка на пустоту
int is_empty(Node * list) {
    return list == NULL;
}

// del element удаление элемента
Data pop(Node ** plist) {
    Node * p = NULL;
    Data val;
    if (plist == NULL) {
        exit(-1);
    }
    p = (*plist);
    val = p->data;
    (*plist) = (*plist)->next;
    free(p);
    return val;
}

Node* getLast(Node *list) {
    if (list == NULL) {
        return NULL;
    }
    while (list->next) {
        list = list->next;
    }
    return list;
}

Node* getNthelement(Node* list, Data n) {
    int counter = 0;
    while (counter < n && list) {
        if (list->next != NULL) {
            list = list->next;
            counter++;
        } else {
            printf("Error in count elements\n");
            exit(-1);
        }
    }
    return list;
}

void pushBack(Node *list, Data value) {
    Node *last = getLast(list);
    Node *tmp = (Node*)malloc(sizeof(Node));
    tmp->data = value;
    tmp->next = NULL;
    last->next = tmp;
}

Node* getLastButOne(Node* list) {
    if (list == NULL) {
        exit(-2);
    }
    if (list->next == NULL) {
        return NULL;
    }
    while (list->next->next) {
        list = list->next;
    }
    return list;
}

void popBack(Node **plist) {
    Node *lastbn = NULL;
    //Получили NULL
    if (!plist) {
        exit(-1);
    }
    //Список пуст
    if (!(*plist)) {
        exit(-1);
    }
    lastbn = getLastButOne(*plist);
    //Если в списке один элемент
    if (lastbn == NULL) {
        free(*plist);
        *plist = NULL;
    } else {
        free(lastbn->next);
        lastbn->next = NULL;
    }
}


int countElement(Node* plist) {
    int count = 0;
    if (!is_empty(plist)){
        while (plist->next != NULL) {
            plist = plist->next;
            count++;
        }
        count++;
    } else {
        count = 0;
    }
    return count;
}
