// This program is another version of reverse.c whch utilizes variable-length array 

#include <stdio.h>

int main(void) {
    int i, n;
    printf("How many numbers would you like to reverse: ");
    scanf("%d", &n);

    int a[n]; /* only in  C99 */
    printf("Enter %d numbers: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    
    printf("In reverse order: ");
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}