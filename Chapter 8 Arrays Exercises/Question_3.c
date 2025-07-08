/* Write a declaration of an array named weekend with first and last value to be true. */

#include <stdio.h>
#include <stdbool.h>

#define N 7

int main(void) {
    int i;
    bool weekend[N] = {[0] = true, [6] = true};
    for (i = 0; i < N; i++) {
        printf("%d", weekend[i]);
    }
    return 0;
}