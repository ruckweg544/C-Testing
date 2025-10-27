// Chapter 9 Functions
// 9.3 Arguments - Array Arguments
// Date: 2025-10-27

// Purpose: To demonstrate a function is allowed to change the elements
// of an array parameter - which is reflected in the corresponding argument.

// This program is written to test the behavior of the compiler
// when the array length and array argument is different

#include <stdio.h>

#define LEN 100

void set_array(int a[], int n) {
    int i = 0;

    for (i = 0; i < n; i++)
        a[i] = 1;
}

// Function that updates the given array
void store_zeros(int a[], int n) {
    int i;

    for (i = 0; i < n; i++) 
        a[i] = 0;
}

int sum_array(int a[], int n) {
    int i, sum = 0;

    for (i = 0; i < n; i++)
        sum += a[i];

    return sum;
}

int main(void) {
    int test_array[LEN], TOTAL;
    int BEFORE, AFTER;

    set_array(test_array, LEN);
    BEFORE = sum_array(test_array, LEN);

    store_zeros(test_array, LEN);
    AFTER = sum_array(test_array, LEN);
    


    printf("Before Update: %d\n", BEFORE);
    printf("After Update: %d\n", AFTER);
    return 0;
}