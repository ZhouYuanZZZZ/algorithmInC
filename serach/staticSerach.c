#include "../common/utils.h"

//平均时间复杂度n/2
int seqSerach(int p[],int len ,int elem) {
    for (int i = 0; i <len ; i++) {
        if(elem == p[i]){
            return i;
        }
    }
    return -1;
}

int binarySerach(int p[],int len ,int elem){
    int low = 0;
    int high = len - 1; //定义上下界
    int mid;
    while (low <= high) {
        mid = (low + high) / 2;
        //查找到元素
        if (p[mid] == elem) {
            return mid;
        }
        //在前半区间进行查找
        if (elem < p[mid]) {
            high = mid - 1;
        }

        //在后半区间查找
        if(elem > p[mid]){
            low = mid +1;
        }
    }
    return -1;
}

int main1(){
    int *p = generalRandomIntArray(10, 10);
    insertSort(p,10);
    //int i = seqSerach(p, 10, 2);
    int i = binarySerach(p, 10, 2);
    showIntArray1(p,10);
    printf("%d",i);
    return 0;
}