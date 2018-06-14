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
    if(stack->top == 99){
        printf("Stack overflow \n");
    }else{
        stack->data[++stack->top] = elem;
    }
}

int popSeqStaticStack(SeqStaticStack* stack){

    if(stack->top < 0){
        printf("Stack empty \n");
    }else{
        return stack->data[stack->top--];

    }
}

int SeqStaticStackSize(SeqStaticStack* stack){
    return stack->top+1;
}

int getSeqStaticStackTopElem(SeqStaticStack* stack){
    if(stack->top < 0){
        printf("Stack empty \n");
    }else{
        return stack->data[stack->top];
    }
}

int checkSeqStaticStackEmpty(SeqStaticStack* stack){
    return stack->top == -1 ?0:1;
}

