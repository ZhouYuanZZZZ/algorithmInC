#include "BiTree.h"



BiTree initTestBiTree(){

    BiTNode* node1 = (BiTNode*)malloc(sizeof(BiTNode));
    node1->data = 'A';

    BiTNode* node2 = (BiTNode*)malloc(sizeof(BiTNode));
    node1->data = 'B';

    BiTNode* node3 = (BiTNode*)malloc(sizeof(BiTNode));
    node1->data = 'C';

    BiTNode* node4 = (BiTNode*)malloc(sizeof(BiTNode));
    node1->data = 'D';

    BiTNode* node5 = (BiTNode*)malloc(sizeof(BiTNode));
    node1->data = 'E';

    BiTNode* node6 = (BiTNode*)malloc(sizeof(BiTNode));
    node1->data = 'F';

    BiTNode* node7 = (BiTNode*)malloc(sizeof(BiTNode));
    node1->data = 'G';

    BiTNode* node8 = (BiTNode*)malloc(sizeof(BiTNode));
    node1->data = 'H';

    BiTNode* node9 = (BiTNode*)malloc(sizeof(BiTNode));
    node1->data = 'I';

    BiTNode* node10 = (BiTNode*)malloc(sizeof(BiTNode));
    node1->data = 'J';

    BiTNode* node11 = (BiTNode*)malloc(sizeof(BiTNode));
    node1->data = 'K';

    BiTree tree = node1;
    node1->lChild = node2;
    node1->rChild = node3;

    node2->lChild = node4;
    node2->rChild = node5;

    node3->lChild = node6;
    node3->rChild = node7;

    node4->lChild = node8;
    node4->rChild = node9;

    node5->lChild = node10;
    node6->rChild = node11;

    return tree;
}

int main() {
    return 0;
}