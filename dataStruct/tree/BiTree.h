

#ifndef ALGORITHMINC_BITREE_H
#define ALGORITHMINC_BITREE_H

#include <malloc.h>
#include "../../common/utils.h"

typedef struct BiTNode{
    char data;
    struct BiTNode* lChild,* rChild;
} BiTNode,* BiTree;



#endif //ALGORITHMINC_BITREE_H
