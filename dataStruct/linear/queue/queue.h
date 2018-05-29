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

CyclicQueue*  createCyclicQueue();
void initCyclicQueue(CyclicQueue* queue);
int cyclicQueueIsEmpty(CyclicQueue* queue);
int cyclicQueueIsFull(CyclicQueue* queue);
void enCyclicQueue(CyclicQueue* queue,int elem);
int deCyclicQueue(CyclicQueue* queue);
void showCyclicQueue(CyclicQueue* queue);

#endif //ALGORITHMINC_QUEUE_H
