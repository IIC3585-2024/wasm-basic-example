#include <stdio.h>
#include <stdlib.h>

int sum_array(int *arr, int size) {
    printf("[C] Array elements:\n");
    int sum = 0;
    for(int i = 0; i < size; i++) {
        printf("[C] %d\n", arr[i]);
        sum += arr[i];
    }
    printf("[C] Sum: %d\n", sum);
    return sum;
}
