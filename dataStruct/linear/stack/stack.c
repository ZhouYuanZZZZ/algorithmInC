#include "../../../common/utils.h"
#include "stack.h"

SeqStaticStack* createStaticStack(){

    SeqStaticStack* seqStaticStack = (SeqStaticStack*)malloc(sizeof(SeqStaticStack));
    return seqStaticStack;
}

void initSeqStaticStack(SeqStaticStack* stack){
    stack->top = -1;
}

void pushSeqStaticStack(SeqStaticStack* stack,int elem){
    stack->data[++stack->top] = elem;
}

int popSeqStaticStack(SeqStaticStack* stack){

    return stack->data[stack->top--];
}

int SeqStaticStackSize(SeqStaticStack* stack){
    return stack->top+1;
}

int getSeqStaticStackTopElem(SeqStaticStack* stack){
    return stack->data[stack->top];
}

int checkSeqStaticStackEmpty(SeqStaticStack* stack){
    return stack->top == -1 ?0:1;
}

