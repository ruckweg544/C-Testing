// modify the reverse.c of Section 8.1 to use the expression (int) (sizeof(a) / sizeof(a[0])) 
// (or a macro with this value) for the array length.

/* Reverse.c */

#include <stdio.h>
#define LENGTH(arr) ((int)(sizeof(arr) / sizeof((arr)[0])))

int main(void) {
    int a[10], i;
    int length = LENGTH(a);

    printf("Enter %d numbers: ", length);
    for (i = 0; i < length; i++)
        scanf("%d", &a[i]);
    
    printf("In reverse order: ");
    for (i = length - 1; i >= 0; i--)
        printf(" %d", a[i]);
    printf("\n");

    return 0;
}