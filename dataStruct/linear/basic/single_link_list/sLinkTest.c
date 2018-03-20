#include "../../../../common/utils.h"
#include "sLink.h"
int main(){

    SL L = createLinkedList();
    int a[] = {1,2,3,4,5};
    createLinkedListFromHead(L,a,5);
    showSLinkedList(L);
    return 0;
}