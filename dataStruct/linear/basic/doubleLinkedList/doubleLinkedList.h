#ifndef ALGORITHMINC_DOUBLELINKEDLIST_H
#define ALGORITHMINC_DOUBLELINKEDLIST_H
#include <malloc.h>

//双链表节点
typedef struct DSNode{
    int data;
    struct DSNode* next , * prior;
} DSNode,* DSL;


//创建双链表
DSL createDLinkedList();

//头插法建议双链表
void createDLinkedListFromHead(DSL DL,int a[],int len);

void inserDSNodetoHead(DSL DL,int elem);


#endif //ALGORITHMINC_DOUBLELINKEDLIST_H