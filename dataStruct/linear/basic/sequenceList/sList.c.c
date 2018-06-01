#include "../../../../common/utils.h"
#include "sList.h"

//初始化
SeqList *initEmptySeqList(int size) {
    SeqList* seqList = (SeqList* )malloc(sizeof(SeqList));
    seqList->loc = -1;

    seqList->elem = (int* )malloc(sizeof(int)*size);

    return seqList;
}

//求表长
int getSlistLenth(SeqList *list) {
    int length = list->loc + 1;
    return length;
}

//返回下标为loc的元素
int getSlistElem(SeqList *list, int loc) {
    int elem = *(list->elem + loc);
    return elem;
}

//获取指定元素的下标
int getSlistElemLocation(SeqList *list, int elem) {
    int loc = -1;
    for (int i = 0; i < list->loc; i++) {
        if (*(list->elem + i) == elem) {
            loc = i;
            break;
        }
    }
    return loc;
}

//插入线性表
void insertSlist(SeqList* list,int elem,int loc){
    for(int i=list->loc;i>=loc;i--){
        *(list->elem+i+1) = *(list->elem+i);
    }

    *(list->elem+loc) = elem;

    list->loc++;
}

//更新指定位置的元素
void updateSlist(SeqList* list,int elem,int loc){

    *(list->elem+loc) = elem;
}

//删除元素
void deleteSlist(SeqList* list,int loc){
    for(int i=loc;i<=list->loc;i++){
        *(list->elem+i-1) = *(list->elem+i);
    }
    list->loc--;
}

void displaySlist(SeqList* list){
    printf("[");
    for(int i=0;i<=list->loc;i++){
        printf("%d ",*(list->elem+i));
    }
    printf("]\n");
}

int main() {

   int *p = generalRandomIntArray(10,100);
    SeqList * list = initEmptySeqList(10);

    for(int i=0;i<10;i++){
        insertSlist(list,*(p+i),i);
    }
    displaySlist(list);

    insertSlist(list,666,2);
    displaySlist(list);

    updateSlist(list,777,2);
    displaySlist(list);

    deleteSlist(list,3);
    displaySlist(list);

    return 0;
}