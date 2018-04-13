


#include "../../common/utils.h"


//直接插入排序,输入一个指向数组的指针p,和数组的长度
//时间复杂度为n²
void insertSort(int p[], int len) {
    int temp;
    for (int i = 1; i < len; i++) {   //i从第2个元素开始，第1个元素为有序的序列。
        temp = p[i];                 //储存待比较的元素
        int j = i-1;                 //有序序列中最后一个元素的下标
        while(j>=0 && p[j]>temp){    //找到待插入的位置,并且移动元素
            p[j+1] = p[j];           //待排序元素的位置空余出来,移动元素
            j--;
        }
        p[j+1] = temp;              //插入待排序的元素
    }
}

void binaryInsertSort(int p[], int len) {
    int temp;
    for (int i = 1; i < len; i++) {
        temp = p[i];
        int low = 0;
        int hign = i - 1;
        int m;
        //寻找插入位置
        while (low <= hign) {
            m = (low + hign) / 2;
            if (temp < p[m]) {
                hign = m - 1;
            } else{
                low = m+1;
            }
        }

        //后移记录并插入
        for(int j = i-1;j>=hign+1;j--){
            p[j+1] = p[j];
        }

        //插入
        p[hign+1]=temp;
    }

}

int main(){

    int *p = generalRandomIntArray(20, 100);
    showIntArray1(p,20);
    binaryInsertSort(p,20);
    showIntArray1(p,20);
    return 0;
}