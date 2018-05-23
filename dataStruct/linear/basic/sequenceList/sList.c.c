#include "../../../../common/utils.h"
#include "sList.h"

//初始化
SeqList *initEmptySeqList() {
    SeqList *seqList = malloc(sizeof(SeqList));
    seqList->loc = -1;
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
            loc = list->loc;
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

int main() {

    return 0;
}