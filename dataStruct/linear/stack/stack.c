#include "../../../common/utils.h"
#include "stack.h"

SeqStaticStack* createStaticStack(){

    SeqStaticStack* seqStaticStack = (SeqStaticStack*)malloc(sizeof(SeqStaticStack));
    return seqStaticStack;
}

void initSeqStaticStack(SeqStaticStack* stack){
    stack->top = -1;
}