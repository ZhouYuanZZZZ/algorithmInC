

#ifndef ALGORITHMINC_BITREE_H
#define ALGORITHMINC_BITREE_H

#include <malloc.h>
#include "../../common/utils.h"

typedef struct BiTNode{
    int data;
    struct BiTNode* lChild,* RChild;
} BiTNode,* BiTree;

#endif //ALGORITHMINC_BITREE_H
