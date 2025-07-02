#include <stdio.h>

int main(void) {
    int a[] = {1, [3] = 9, 1, [9] = 9}, size_a, i;
    size_a = sizeof(a)/sizeof(a[0]);
    for (i = 0; i <= size_a; i++) {
        printf("%d\n", a[i]);
    }
    return 0;
}