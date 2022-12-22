

#include <stdio.h>

#define DATA_ARRAY_LENGTH       12

// 
int shell_sort(int *data, int length) {

    int gap = 0; //分组的跨度
    int i = 0, j = 0;

    for (gap = length / 2; gap >= 1;gap /= 2) { // 分组的次数

        for(i = gap; i < length; i ++) { // 每组遍历 

            int temp = data[i];
            for (j = i - gap; j >= 0 && temp < data[j];j = j - gap) { //组内排序

                data[j+gap] = data[j];

            }

            data[j+gap] = temp;
        }

    }
    return 0;
}

// 
int sort(int *data, int left, int right) { //每一次递归， 每调用一次， 确定一个值得正确位置

    if (left >= right) return 0;

    int i = left;
    int j = right;
    int key = data[left];

    while (i < j) { //

        while (i < j && key < data[j]) { // 
            j --;
        }
        data[i] = data[j];

        while (i < j && key >= data[i]) {
            i ++;
        }
        data[j] = data[i];
    }
    // i == j
    data[i] = key;

    //
    sort(data, left, i-1);
    sort(data, i+1, right);

}


int quick_sort(int *data, int length) { //

    sort(data, 0, length-1);


}


int main() {

    int i = 0;
    int data[DATA_ARRAY_LENGTH] = {23, 64, 24, 12, 9, 16, 53, 57, 71, 79, 87, 97};
#if 0
    shell_sort(data, DATA_ARRAY_LENGTH);
#else

    quick_sort(data, DATA_ARRAY_LENGTH);

#endif 


    for (i = 0;i < DATA_ARRAY_LENGTH;i ++) {
        printf("%4d", data[i]);
    }
    printf("\n");
}
