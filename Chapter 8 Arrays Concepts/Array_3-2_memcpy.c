// Example of copying one array into another
// The example would use two arrays with 5 elements

#include <stdio.h>
#include <string.h>
#define N 5

int main(void) {
    int original[N], i;
    
    printf("Enter %d numbers: ", N);
    for (i = 0; i < N; i++)
        scanf("%d", &original[i]);

    int size = sizeof(original);
    int copy[N];
    memcpy(copy, original, size);

    printf("Copy of the number: ");
    for (i = 0; i < N; i++)
        printf("%d ", copy[i]);
    printf("\n");

    return 0;
}