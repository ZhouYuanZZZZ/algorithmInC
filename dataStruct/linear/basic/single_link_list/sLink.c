#include "../../../../common/utils.h"
#include "sLink.h"
/**
 * C 语言: 单向链表
 *
 * @author skywang
 * @date 2013/11/07
 */


// 创建节点，p为节点值
SL createLinkedList() {

   SL L = (SL)malloc(sizeof(SNode));
    L->next = NULL;
}

//头插法建立链表
void createLinkedListFromHead(SL L,int a[],int len){
    for (int i = 0; i < len; i++) {
        insertDataIntoListHead(L,a[i]);
    }
}

//将单条数据头插法插入链表中
void insertDataIntoListHead(SNode * head,int data){

    SNode * node = (SNode *)malloc(sizeof(SNode));
    node->data = data;
    node->next = head->next;
    head->next = node;
}

SNode * insertDataIntoListTail(SNode * tail,int data){

    SNode * node = (SNode *)malloc(sizeof(SNode));
    node->data = data;
    tail->next = node;
    node->next=NULL;

    return node;
}

void showSLinkedList(SL L){
    if(L->next != NULL){
        printf("[");

        SNode * item = L->next;
        while (item != NULL) {
            printf("%d ", item->data);
            item = item->next;
        }

        printf("]");
    }else{
        printf("Enpty List\n");
    }
}
