


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

//折半插入排序,时间复杂度为n平方
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
                hign = m - 1;  //在有序序列前半部分寻找插入位置
            } else{
                low = m+1;    //在有序序列后半部分寻找插入位置
            }
        }

        //后移记录并插入,重点是在high+1处后移元素,并在high+1处插入值
        for(int j = i-1;j>=hign+1;j--){
            p[j+1] = p[j];
        }

        //插入
        p[hign+1]=temp;
    }

}

/*希尔排序,又称为缩小增量排序
  利用了直接插入排序在正序状态下时间复杂度为n的特性。
  将待排序的序列分成若干个子序列分别进行排序,最后序列基本有序时再进行一次直接插入排序
*/
void shellSort(int p[], int len, int dlta[], int dltaLen) {
    for (int i=0;i<dltaLen;i++) {
        shellSortSingle(p,len,dlta[i]);
    }
}

//一趟shell排序,时间复杂度为n1.5
void shellSortSingle(int p[], int len, int dk) {
    int temp;
    for(int i=dk;i<len;i++){//dk 为第一个子序列待排序序列索引
        temp = p[i];
        int j = i-dk;       //j为子序列中有序序列最后一个元素
        while(j>=0 && p[j]>temp){    //找到待插入的位置,并且移动元素
            p[j+dk] = p[j];           //待排序元素的位置空余出来,移动元素
            j = j-dk;
        }
        p[j+dk] = temp;              //插入待排序的元素
    }
}



int maini(){

    int *p = generalRandomIntArray(20, 100);
    showIntArray1(p,20);
    int dlta[] = {5,3,1};
    //binaryInsertSort(p,20);
    shellSort(p,20,dlta,3);
    showIntArray1(p,20);
    return 0;
}