#include "queue.h"


CyclicQueue *createCyclicQueue() {
    CyclicQueue *queue = (CyclicQueue *) malloc(sizeof(CyclicQueue));
    return queue;
}

void initCyclicQueue(CyclicQueue *queue) {
    queue->front = queue->rear = 0;
}

int cyclicQueueIsEmpty(CyclicQueue *queue) {
    if (queue->front == queue->rear) {
        return true;
    } else {
        return false;
    }
}

int cyclicQueueIsFull(CyclicQueue *queue) {
    if ((queue->rear + 1 - queue->front + MAX_SIZE0) % MAX_SIZE0 == MAX_SIZE0) {
        return true;
    } else {
        return false;
    }
}

void enCyclicQueue(CyclicQueue *queue, int elem) {
    if (cyclicQueueIsFull(queue)) {
        printf("Queue is full");
    } else {
        queue->data[queue->rear] = elem;
        queue->rear = (queue->rear + 1) % MAX_SIZE0;
    }
}

int deCyclicQueue(CyclicQueue *queue) {
    if (cyclicQueueIsEmpty(queue)) {
        printf("Queue is empty");
    } else {
        int elem = queue->data[queue->front];
        queue->front = (queue->front + 1) % MAX_SIZE0;
        return elem;
    }
}

void showCyclicQueue(CyclicQueue *queue) {
    printf("[");
    while (!cyclicQueueIsEmpty(queue)) {
        printf("%d ", deCyclicQueue(queue));
    }
    printf("]\n");
}

LinkedQueueNode *createLinkedQueueNode(int elem) {
    LinkedQueueNode *node = (LinkedQueueNode *) malloc(sizeof(LinkedQueueNode));
    node->data = elem;
    node->next = NULL;
    return node;
}

LinkedQueue *createLinkedQueue() {
    LinkedQueue *queue = (LinkedQueue *) malloc(sizeof(LinkedQueue));
    return queue;
}

void initLinkedQueue(LinkedQueue *queue) {

    queue->front = queue->rear = (LinkedQueueNode *) malloc(sizeof(LinkedQueueNode));//建立头结点
    queue->front->next = NULL;
}

int linkedQueueIsEmpty(LinkedQueue *queue) {
    if (queue->front == queue->rear) {
        return true;
    } else {
        return false;
    }
}

void enLinkedQueue(LinkedQueue *queue, int elem) {
    LinkedQueueNode *node = createLinkedQueueNode(elem);
    queue->rear->next = node;
    queue->rear = node;
}

int deLinkedQueue(LinkedQueue *queue) {
    if (linkedQueueIsEmpty(queue)) {
        printf("LinkedQueue is empty");
        return -1;
    } else {
        LinkedQueueNode *node = queue->front->next;
        int elem = node->data;

        queue->front->next = node->next;
        if(queue->front->next == NULL){
            queue->rear = queue->front;
        }

        free(node);

        return elem;
    }
}

void deLinkedQueueAll(LinkedQueue* queue){
    printf("[");
    while(!linkedQueueIsEmpty(queue)){
        printf("%d ",deLinkedQueue(queue));
    }
    printf("]\n");
}

int main() {
//    CyclicQueue *queue = createCyclicQueue();
//    initCyclicQueue(queue);
//    enCyclicQueue(queue, 666);
//    enCyclicQueue(queue, 777);
//    enCyclicQueue(queue, 888);
//    enCyclicQueue(queue, 999);
//    deCyclicQueue(queue);
//    enCyclicQueue(queue,1);
//    showCyclicQueue(queue);

    LinkedQueue *queue = createLinkedQueue();
    initLinkedQueue(queue);
    enLinkedQueue(queue, 666);
    enLinkedQueue(queue, 777);
    enLinkedQueue(queue, 888);

    deLinkedQueueAll(queue);

    enLinkedQueue(queue,896);
    enLinkedQueue(queue,891);

    deLinkedQueueAll(queue);

    for(int i=0;i<100;i++){
        enLinkedQueue(queue,i);
    }
    deLinkedQueueAll(queue);
    return 0;
}