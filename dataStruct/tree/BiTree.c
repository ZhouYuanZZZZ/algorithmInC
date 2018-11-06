#include "BiTree.h"


BiTree initTestBiTree() {

    BiTNode *node1 = (BiTNode *) malloc(sizeof(BiTNode));
    node1->data = 'A';
    node1->rChild = NULL;
    node1->lChild = NULL;

    BiTNode *node2 = (BiTNode *) malloc(sizeof(BiTNode));
    node2->data = 'B';
    node2->rChild = NULL;
    node2->lChild = NULL;

    BiTNode *node3 = (BiTNode *) malloc(sizeof(BiTNode));
    node3->data = 'C';
    node3->rChild = NULL;
    node3->lChild = NULL;

    BiTNode *node4 = (BiTNode *) malloc(sizeof(BiTNode));
    node4->data = 'D';
    node4->rChild = NULL;
    node4->lChild = NULL;

    BiTNode *node5 = (BiTNode *) malloc(sizeof(BiTNode));
    node5->data = 'E';
    node5->rChild = NULL;
    node5->lChild = NULL;

    BiTNode *node6 = (BiTNode *) malloc(sizeof(BiTNode));
    node6->data = 'F';
    node6->rChild = NULL;
    node6->lChild = NULL;

    BiTNode *node7 = (BiTNode *) malloc(sizeof(BiTNode));
    node7->data = 'G';
    node7->rChild = NULL;
    node7->lChild = NULL;

    BiTNode *node8 = (BiTNode *) malloc(sizeof(BiTNode));
    node8->data = 'H';
    node8->rChild = NULL;
    node8->lChild = NULL;

    BiTNode *node9 = (BiTNode *) malloc(sizeof(BiTNode));
    node9->data = 'I';
    node9->rChild = NULL;
    node9->lChild = NULL;

    BiTNode *node10 = (BiTNode *) malloc(sizeof(BiTNode));
    node10->data = 'J';
    node10->rChild = NULL;
    node10->lChild = NULL;

    BiTNode *node11 = (BiTNode *) malloc(sizeof(BiTNode));
    node11->data = 'K';
    node11->rChild = NULL;
    node11->lChild = NULL;

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
    node5->rChild = node11;

    return tree;
}

void visitNode(BiTNode *node) {
    printf("%c", node->data);
}

void preOrder(BiTree tree) {
    if (tree != NULL) {
        visitNode(tree);
        preOrder(tree->lChild);
        preOrder(tree->rChild);
    }
}

void inOrder(BiTree tree) {
    if (tree != NULL) {
        preOrder(tree->lChild);
        visitNode(tree);
        preOrder(tree->rChild);
    }
}

void postOrder(BiTree tree) {
    if (tree != NULL) {
        preOrder(tree->lChild);
        preOrder(tree->rChild);
        visitNode(tree);
    }
}

BiTNodeStack initEmptyBiTNodeStack() {

    BiTNodeStack s = (BiTNodeStack) malloc(sizeof(BiTNodeStack));
    s->nodes = NULL;
    return s;

}

void push(BiTNodeStack s, BiTNodeStackNode node) {
       node->next = s->nodes;
       s->nodes = node;
}

BiTNodeStackNode pop(BiTNodeStack s){
    if(s->nodes == NULL){
        printf("stack empty\n");
        return NULL;
    }

    BiTNodeStackNode popNode = s->nodes;
    s->nodes = s->nodes->next;

    return popNode;
    
}

int checkisEmptyStack(BiTNodeStack s){
    if(s->nodes == NULL){
        return 1;
    }else{
        return 0;
    }
}

BiTNodeStackNode createStackNode(BiTNode *node){
    BiTNodeStackNode stackNode = (BiTNodeStackNode)malloc(sizeof(BiTNodeStackNode));
    stackNode->p = node;
    stackNode->next = NULL;
}

int main() {

    BiTree tree = initTestBiTree();
    preOrder(tree);
    printf("\n");
    inOrder(tree);
    printf("\n");
    postOrder(tree);
    
    printf("\n");
    BiTNodeStack s = initEmptyBiTNodeStack();
    BiTNode *node1 = (BiTNode *) malloc(sizeof(BiTNode));
    node1->data = 'A';
    node1->rChild = NULL;
    node1->lChild = NULL;

    BiTNode *node2 = (BiTNode *) malloc(sizeof(BiTNode));
    node2->data = 'B';
    node2->rChild = NULL;
    node2->lChild = NULL;

    BiTNode *node3 = (BiTNode *) malloc(sizeof(BiTNode));
    node3->data = 'C';
    node3->rChild = NULL;
    node3->lChild = NULL;

    BiTNodeStackNode pNode = pop(s);

    BiTNodeStackNode pStackNode1 = createStackNode(node1);
    BiTNodeStackNode pStackNode2 = createStackNode(node2);
    BiTNodeStackNode pStackNode3 = createStackNode(node3);
    push(s,pStackNode1);
    push(s,pStackNode2);
    push(s,pStackNode3);

    BiTNodeStackNode p0 = pop(s);
    printf("%c",p0->p->data);

    BiTNodeStackNode p1 = pop(s);
    printf("%c",p1->p->data);

    BiTNodeStackNode p2 = pop(s);
    printf("%c",p2->p->data);

    BiTNodeStackNode p3 = pop(s);



    return 0;
}