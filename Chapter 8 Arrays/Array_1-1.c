#include <stdio.h>
#define N 10
/* The program clears a */

/* int main(void) {
    int a[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, i;
    for (i = 0; i < N; i++)
        a[i] = 0;
    for (i = 1; i <= N; i++) {
        printf("%d\n", a[i]);
    }
    return 0;
} */

int main(void) {
    int a[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, i;
    while (i < N)
        a[i++] = 0;
    for (i = 1; i <= N; i++) {
        printf("%d\n", a[i]);
    }
    return 0;
}