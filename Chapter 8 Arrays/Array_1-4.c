// Reversing a series of numbers
// The program would ask the user to enter 10 numbers
// The program would output 10 numbers in a reversing order

#include <stdio.h>
#define N 10

int main(void) {
    int a[N], i;
    
    printf("Enter %d numbers: ", N);
    for (i = 0; i < N; i++)
        scanf("%d", &a[i]);
    
    printf("In reverse order: ");
    for (i = N - 1; i >= 0; i--) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}