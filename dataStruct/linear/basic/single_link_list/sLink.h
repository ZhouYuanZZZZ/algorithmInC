

#ifndef SLINK
#define SLINK


#include "malloc.h"


// 单向链表的“节点”
typedef struct SNode {
    int data;
    struct SNode* next;
}SNode,* SL;


//创建单链表
SL createLinkedList();

//头插法建立链表
void createLinkedListFromHead(SL L,int a[],int len);


//销毁链表
void destroyLinkedList(SL L);


//将单条数据头插法插入链表中
void insertDataIntoListHead(SNode * head,int data);

void createLinkedListFromTail(SL L,int a[],int len);

SNode * insertDataIntoListTail(SNode * tail,int data);

//按序号查找元素
int getElemByIndex(SL L,int index);

//按值查找
int getIndexByElem(SL L,int elem);

void showSLinkedList(SL L);

//求单链表的长度
int getListLength(SL L);

//在单链表中插入元素
int insertElem(SL L,int index,int elem);

//单链表的删除操作
int removeElem(SL L,int index);

//按元素从小到大的顺序合并两个单链表
SL mergeLinkList(SL L1,SL L2);

//单链表就地求逆
void reverseSeqlinkedList(SL L);



#endif
