#include "queue.h"


CyclicQueue*  createCyclicQueue(){
    CyclicQueue*  queue =  (CyclicQueue*)malloc(sizeof(CyclicQueue));
    return queue;
}

void initCyclicQueue(CyclicQueue* queue){
    queue->front = queue->rear = 0;
}

int cyclicQueueIsEmpty(CyclicQueue* queue){
    if(queue->front == queue->rear){
        return 1;
    }else{
        return 0;
    }
}

int cyclicQueueIsFull(CyclicQueue* queue){
    if((queue->rear+1 - queue->front + MAX_SIZE0)%MAX_SIZE0 == queue->front){
        return 1;
    }else{
        return 0;
    }
}

void enCyclicQueue(CyclicQueue* queue,int elem){
    if(cyclicQueueIsFull(queue)){
        printf("Queue is full");
    } else{
        queue->data[queue->rear] = elem;
        queue->rear = (queue->rear+1)%MAX_SIZE0;
    }
}

int deCyclicQueue(CyclicQueue* queue){
    if(cyclicQueueIsEmpty(queue)){
        printf("Queue is empty");
    }else{
        int elem = queue->data[queue->front];
        queue->front = (queue->front+1)%MAX_SIZE0;
        return elem;
    }
}

void showCyclicQueue(CyclicQueue* queue){
    printf("[");
    while(!cyclicQueueIsEmpty(queue)){
        printf("%d ",deCyclicQueue(queue));
    }
    printf("]\n");
}

int main(){
    CyclicQueue *queue = createCyclicQueue();
    initCyclicQueue(queue);
    enCyclicQueue(queue,666);
    enCyclicQueue(queue,777);
    enCyclicQueue(queue,888);
    deCyclicQueue(queue);
    showCyclicQueue(queue);
    return 0;
}