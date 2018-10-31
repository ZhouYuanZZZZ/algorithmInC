//
// Created by zy127 on 2018/5/25.
//

#ifndef ALGORITHMINC_STACK_H
#define ALGORITHMINC_STACK_H

#include <malloc.h>
typedef struct StaticStack{

    int data[100];
    int top;
} SeqStaticStack;

typedef struct DynamicStack{
    int* bottom;
    int* top;
    int stackSize;
} SeqDynamicStack;

//链栈定义
typedef struct LinkStackNode{
    int data;
    struct LinkStackNode* next;
}LinkedStack;

SeqStaticStack* createStaticStack();
void initSeqStaticStack(SeqStaticStack* stack);
void pushSeqStaticStack(SeqStaticStack* stack,int elem);
int popSeqStaticStack(SeqStaticStack* stack);
int SeqStaticStackSize(SeqStaticStack* stack);
int getSeqStaticStackTopElem(SeqStaticStack* stack);
int checkSeqStaticStackEmpty(SeqStaticStack* stack);

#endif //ALGORITHMINC_STACK_H
