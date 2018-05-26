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

SeqStaticStack* createStaticStack();
void initSeqStaticStack(SeqStaticStack* stack);
void pushSeqStaticStack(int elem);
int popSeqStaticStack();
int SeqStaticStackSize(SeqStaticStack* stack);
int getSeqStaticStackTopElem();
int checkSeqStaticStackEmpty(SeqStaticStack* stack);

#endif //ALGORITHMINC_STACK_H
