//
// Created by zy127 on 2018/5/29.
//

#ifndef ALGORITHMINC_QUEUE_H
#define ALGORITHMINC_QUEUE_H
#include <malloc.h>
#include "../../../common/utils.h"
#define MAX_SIZE 100
#define MAX_SIZE0 6

typedef struct SeqQueueStruct{
    int data[MAX_SIZE];
    int front,rear;
} SeqQueue;

typedef struct CyclicQueueStruct{
    int data[6];
    int front,rear;
} CyclicQueue;

typedef struct LinkedQueueStruct{
    int data;
    struct LinkedQueueStruct* next;
}LinkedQueueNode;

typedef struct {
    LinkedQueueNode* front;
    LinkedQueueNode* rear;
}LinkedQueue;

CyclicQueue*  createCyclicQueue();
void initCyclicQueue(CyclicQueue* queue);
int cyclicQueueIsEmpty(CyclicQueue* queue);
int cyclicQueueIsFull(CyclicQueue* queue);
void enCyclicQueue(CyclicQueue* queue,int elem);
int deCyclicQueue(CyclicQueue* queue);
void showCyclicQueue(CyclicQueue* queue);

LinkedQueueNode*  createLinkedQueueNode(int elem);
LinkedQueue* createLinkedQueue();
void initLinkedQueue(LinkedQueue* queue);
int linkedQueueIsEmpty(LinkedQueue* queue);
void enLinkedQueue(LinkedQueue* queue,int elem);
int deLinkedQueue(LinkedQueue* queue);
void showLinkedQueue(LinkedQueue* queue);

#endif //ALGORITHMINC_QUEUE_H
