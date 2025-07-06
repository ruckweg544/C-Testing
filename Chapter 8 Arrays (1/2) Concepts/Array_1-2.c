#include <stdio.h>
#define N 10
/* The program reads data into a */
int main(void) {
    int a[N] = {0}, i;
    printf("Enter 10 integers (with a space): ");
    for (i = 0; i < N; i++)
        scanf("%d", &a[i]);
    for (i = 0; i <= N; i++) {
        printf("%d\n", a[i]);
    }
    return 0;
}