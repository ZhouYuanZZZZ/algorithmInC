#include "../../../../common/utils.h"
#include "sLink.h"
int main(){

    SL L1 = createLinkedList();
    SL L2 = createLinkedList();
    int* a = generalRandomIntArray(20,5);
    createLinkedListFromHead(L1,a,5);
    createLinkedListFromTail(L2,a,5);
    showSLinkedList(L1);
    showSLinkedList(L2);

    printf("%d\n",getIndexByElem(L1,4));
    printf("%d\n",getListLength(L1));

    insertElem(L2,5,6666);
    showSLinkedList(L2);

    removeElem(L2,5);
    showSLinkedList(L2);
    return 0;
}

