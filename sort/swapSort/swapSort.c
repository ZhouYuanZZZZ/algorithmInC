#include "../../common/utils.h"

//冒泡排序,时间复杂度为n²
void bubblingSort(int p[], int len) {
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - i; j++) {
            if (p[j] > p[j + 1]) {
                int temp = p[j + 1];
                p[j + 1] = p[j];
                p[j] = temp;
            }
        }
    }
}

/*快速排序平均时间复杂度为 nlog2n
  当序列基本有序时,快速排序时间复杂度最差为n²
  快速排序通常选择序列的第一个元素为枢轴,将序列划分为两个子表,
  元素小于枢轴的排在枢轴前边,元素大于枢轴的排在枢轴后边。对分割后的子表
  按上述原则继续划分,直到所有子表的长度都不超过1为止*/
void quickSort(int p[], int low, int high) {
    if (low < high) {
        int loc = quickPass(p, low, high);
        quickSort(p,low,loc-1);  //左子表递归
        quickSort(p,loc+1,high); //右子表递归
    }
}

//一趟快速排序算法
int quickPass(int a[], int low, int high) {
    int temp = a[low]; //枢轴元素

    while (low<high) {
        while(low<high && a[high]>=temp){
            high--;
        }
        a[low] = a[high];

        while (low < high && a[low] <= temp) {
            low++;
        }
        a[high] = a[low];
    }
    a[low] = temp;

    return low;
}

int main(){

    int *p = generalRandomIntArray(20, 100);
    showIntArray1(p,20);
    quickSort(p,0,19);
    showIntArray1(p,20);
    return 0;
}