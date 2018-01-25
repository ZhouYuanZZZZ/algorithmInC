


#include "../../common/utils.h"
void insertSort(int *p, int len);
int main(){

    int *p = generalRandomIntArray(20, 100);
    showIntArray1(p,20);
    insertSort(p,20);
    showIntArray1(p,20);
    return 0;
}

//直接插入排序,输入一个指向数组的指针p,和数组的长度
//时间复杂度为n²
void insertSort(int p[], int len) {
    int temp;
    for (int i = 1; i < len; i++) {   //i从第2个元素开始，第1个元素为有序的序列。
        temp = p[i];                 //储存待比较的元素
        int j = i-1;                 //有序序列中最后一个元素的下标
        while(j>=0 && p[j]>temp){    //找到待插入的位置,并且移动元素
            p[j+1] = p[j];
            j--;
        }
        p[j+1] = temp;              //插入待排序的元素
    }
}