#include "../../../../common/utils.h"
#include "sLink.h"
int main(){

//    SL L1 = createLinkedList();
//    SL L2 = createLinkedList();
//
//    int a1[] = {1,3,5,7,9};
//    int a2[] = {2,4,6,8,10,11,12,13};
//
//    createLinkedListFromTail(L1,a1,5);
//    createLinkedListFromTail(L2,a2,8);
//
//    showSLinkedList(L1);
//    showSLinkedList(L2);
//
//    SL L3 = mergeLinkList(L1,L2);
//    showSLinkedList(L3);

    SL L1 = createLinkedList();
    int a1[] = {1,3,5,7,9};
    createLinkedListFromTail(L1,a1,5);
    showSLinkedList(L1);
    reverseSeqlinkedList(L1);
    showSLinkedList(L1);
    return 0;
}

