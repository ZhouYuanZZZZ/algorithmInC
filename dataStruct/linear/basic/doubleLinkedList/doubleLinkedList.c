#include "../../../../common/utils.h"
#include "doubleLinkedList.h"

DSL createDLinkedList() {
    DSL DL = (DSL) malloc(sizeof(DSNode));
    DL->next = NULL;
    DL->prior = NULL;

    return DL;
}


void createDLinkedListFromHead(DSL DL, int a[], int len) {

    for (int i = 0; i < len; i++) {
        inserDSNodetoHead(DL, a[i]);
    }
}

DSNode *inserDSNodetoTail(DSNode *tail, int elem) {

    DSNode *node = (DSNode *) malloc(sizeof(DSNode));
    node->data = elem;
    node->next = NULL;

    tail->next = node;
    node->prior = tail;

    tail = node;

    return tail;
}

void createDLinkedListFromTail(DSL DL, int a[], int len) {

    DSNode *tail = DL;
    for (int i = 0; i < len; i++) {
        tail = inserDSNodetoTail(tail, a[i]);
    }
}


void inserDSNodetoHead(DSL DL, int elem) {

    DSNode *node = (DSNode *) malloc(sizeof(DSNode));
    node->data = elem;
    node->next = NULL;
    node->prior = NULL;

    if (DL->next == NULL) {
        DL->next = node;
        node->prior = DL;
    } else {
        node->next = DL->next;
        DL->next->prior = node;

        node->prior = DL;
        DL->next = node;
    }
}

DSNode* createDSNode(int elem){
    DSNode* node = (DSNode*)malloc(sizeof(DSNode));
    node->next = NULL;
    node->prior = NULL;
    node->data = elem;

    return node;
}

void insertIntoDLinkedList(DSL DL, int index, int elem) {

    if (index < 0 || index > getDLinkedListLength(DL)) {
        printf("error index\n");
        return;
    }

    DSNode *pro = DL;
    for (int i = 0; i < index; i++) {
        pro = pro->next;
    }

    DSNode * pNode = createDSNode(elem);
    if(index == getDLinkedListLength(DL)){
        pro->next = pNode;
        pNode->prior = pro;
    }else{
        pNode->next = pro->next;
        pro->next->prior = pNode;
        pro->next = pNode;
        pNode->prior = pro;
    }

}

void deleteFromDLinkedList(DSL DL,int index){
    if(getDLinkedListLength(DL) == 0){
        printf("empty DLinkedList\n");
    }

    if (index < 0 || index > getDLinkedListLength(DL)) {
        printf("error index\n");
        return;
    }

    DSNode *node = DL;
    for (int i = 0; i <= index; i++) {
        node = node->next;
    }

    if(node->next == NULL){
        node->prior->next = NULL;
    }else{
        node->prior->next = node->next;
        node->next->prior = node->prior;
    }

    free(node);
}

int getDLinkedListLength(DSL DL) {
    int i = 0;
    DSNode *node = DL->next;
    while (node != NULL) {
        node = node->next;
        i++;
    }

    return i;
}

void showDSL(DSL DL) {

    if (DL->next == NULL) {
        printf("[");
        printf("]");
        printf("\n");
        printf("[");
        printf("]");
    } else {
        printf("[");
        DSNode *node = DL->next;

        while (node != NULL) {
            printf("%d ", node->data);
            node = node->next;
        }
        printf("]");
        printf("\n");
        node = DL->next;
        printf("[");
        while (node->next != NULL) {
            node = node->next;
        }
        while (node != NULL && node != DL) {
            printf("%d ", node->data);
            node = node->prior;
        }
        printf("]");
    }

}


int main() {
    int *p = generalRandomIntArray(10, 100);
    showIntArray1(p, 10);

    DSL DL = createDLinkedList();
    //createDLinkedListFromHead(DL,p,10);
    createDLinkedListFromTail(DL, p, 10);

    showDSL(DL);

    printf("\n");
    printf("%d\n", getDLinkedListLength(DL));

    insertIntoDLinkedList(DL,10,6666);

    deleteFromDLinkedList(DL,10);
    deleteFromDLinkedList(DL,0);

    showDSL(DL);


    return 0;
}