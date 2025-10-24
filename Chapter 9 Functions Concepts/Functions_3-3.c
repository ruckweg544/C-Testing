// This program is written to test the behavior of the compiler
// when the array length and array argument is different

#include <stdio.h>

#define LEN 100

void set_array_1(int a[], int n) {
    int i = 0;

    for (i = 0; i < n; i++)
        a[i] = 1;
}

int sum_array(int a[], int n) {
    int i, sum = 0;

    for (i = 0; i < n; i++)
        sum += a[i];

    return sum;
}

int main(void) {
    int test_array[LEN], TOTAL;
    int TOTAL_LESS, TOTAL_MORE;

    set_array_1(test_array, LEN);
    TOTAL = sum_array(test_array, LEN);

    TOTAL_LESS = sum_array(test_array, 50);
    TOTAL_MORE = sum_array(test_array, 150);

    printf("NORMAL: %d\n", TOTAL);
    printf("LESS: %d\n", TOTAL_LESS);
    printf("MORE: %d\n", TOTAL_MORE);
    return 0;
}