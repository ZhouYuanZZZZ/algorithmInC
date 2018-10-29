#include <stdbool.h>
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

//尾插法建立链表
void createLinkedListFromTail(SL L,int a[],int len){
    SNode * tail = L;
    for (int i = 0; i < len; i++) {
        tail = insertDataIntoListTail(tail,a[i]);
    }
}

//将单条数据头插法插入链表中
void insertDataIntoListHead(SNode * head,int data){

    SNode* node = (SNode *)malloc(sizeof(SNode));
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
        printf("\n");
    }else{
        printf("Enpty List\n");
    }
}

int getElemByIndex(SL L,int index){

    SNode * item = L->next;
    int count = 0;
    while(item!=NULL){
        if(count == index){
            return item->data;
        }
        item = item->next;
        count++;
    }
    return -1;
}

int getIndexByElem(SL L, int elem){
    SNode * item = L->next;
    int count = 0;
    while(item!=NULL){
        if(item->data == elem){
            return count;
        }
        item = item->next;
        count++;
    }
    return -1;
}

int getListLength(SL L){
    int count = 0;
    SNode * item = L->next;

    while (item!=NULL){
        item = item->next;
        count ++;
    }

    return count;
}

int insertElem(SL L,int index,int elem){

    if(index > getListLength(L) || index < 0){
        return false;
    }

    SNode* item = L->next;
    SNode* pre = L;
    int count = 0;


    //1.查询到需要插入的位置
    while(true){
        if(index == count){
            break;
        } else{
            pre = item;
            item = item->next;
            count++;
        }
    }

    //2.申请节点
    SNode* newItem = (SNode*)malloc(sizeof(SNode));
    newItem->data = elem;

    //3.挂链操作
    newItem->next = item;
    pre->next = newItem;

    return true;
}

int removeElem(SL L,int index){
    if(index > getListLength(L) - 1  || index < 0){
        return false;
    }

    //1.查找待删除的节点
    SNode* item = L->next;
    SNode* pre = L;
    int count = 0;

    while(true){
        if(index == count){
            break;
        } else{
            pre = item;
            item = item->next;
            count++;
        }
    }

    //2.删除节点重新挂链
    pre->next = item->next;
    free(item);

}

SL mergeLinkList(SL L1,SL L2){
    SNode *pa , *pb ,*tailL3;
    SL L3 = createLinkedList();

    tailL3 = L3;
    pa=L1->next;
    pb=L2->next;

    while (pa != NULL && pb != NULL) {
        if (pa->data <= pb->data) {
            tailL3->next = pa;
            tailL3 = pa;
            pa = pa->next;
        }else{
            tailL3->next = pb;
            tailL3 = pb;
            pb = pb->next;
        }
    }

    if (pa != NULL) {
        tailL3->next = pa;
    }

    if (pb != NULL) {
        tailL3->next = pb;
    }

    free(L1);
    free(L2);

    return L3;

}

void destroyLinkedList(SL L){
    SNode node;
    SNode* p = L->next;
    while(p!=NULL){
        node = *p;
        free(p);
        p = node.next;
    }
    free(L);
}

void reverseSeqlinkedList(SL L){
    SNode* nextNode = L->next->next;
    SNode* node = L->next;
    L->next = NULL;
    while(node!=NULL){
        node->next = L->next;
        L->next = node;

        node = nextNode;
        if(nextNode!=NULL){
            nextNode = nextNode->next;
        }

    }
}
