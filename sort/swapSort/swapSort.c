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

int main(){

    int *p = generalRandomIntArray(20, 100);
    showIntArray1(p,20);
    bubblingSort(p,20);
    showIntArray1(p,20);
    return 0;
}