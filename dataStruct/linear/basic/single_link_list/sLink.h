

#ifndef SLINK
#define SLINK


#include <malloc.h>
// 单向链表的“节点”
typedef struct SNode {
    int data;
    struct SNode* next;
}SNode,* SL;



// 创建节点，p为节点值
SL createLinkedList();


//头插法建立链表
void createLinkedListFromHead(SL L,int a[],int len);



//将单条数据头插法插入链表中
void insertDataIntoListHead(SNode * head,int data);


SNode * insertDataIntoListTail(SNode * tail,int data);

void showSLinkedList(SL L);



#endif
