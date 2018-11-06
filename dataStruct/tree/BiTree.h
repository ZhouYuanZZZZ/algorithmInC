

#ifndef ALGORITHMINC_BITREE_H
#define ALGORITHMINC_BITREE_H

#include <malloc.h>
#include "../../common/utils.h"

typedef struct BiTNode{
    char data;
    struct BiTNode* lChild,* rChild;
} BiTNode,* BiTree;

typedef struct BiTNodeStackNode{
    BiTNode* p;
    struct BiTNodeStackNode* next;
}* BiTNodeStackNode ;

typedef struct BiTNodeStack{
    BiTNodeStackNode nodes;
}* BiTNodeStack ;




void visitNode(BiTNode* node);

void preOrder(BiTree tree);

void inOrder(BiTree tree);

void postOrder(BiTree tree);



#endif //ALGORITHMINC_BITREE_H
