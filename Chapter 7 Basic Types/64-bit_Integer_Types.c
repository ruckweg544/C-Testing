#include <stdio.h>
#include <limits.h>

int main(void) {
    printf("Minimum value for short int: %d\n", SHRT_MIN);
    printf("Maximum value for short int: %d\n", SHRT_MAX);
    printf("\n");
    printf("Minimum value for unsigned short int: 0\n");
    printf("Maximum value for unsigned short int: %u\n", USHRT_MAX);
    printf("\n");
    printf("Minimum value for int: %d\n", INT_MIN);
    printf("Maximum value for int: %d\n", INT_MAX);
    printf("\n");
    printf("Minimum value for unsigned int: 0\n");
    printf("Maximum value for unsigned int: %u\n", UINT_MAX);
    printf("\n");
    printf("Minimum value for long: %ld\n", LONG_MIN);
    printf("Maximum value for long: %ld\n", LONG_MAX);
    printf("\n");
    printf("Minimum value for unsigned long: 0\n");
    printf("Maximum value for unsigned long: %lu\n", ULONG_MAX);
    printf("\n");
    printf("Minimum value for long: %lld\n", LLONG_MIN);
    printf("Maximum value for long: %lld\n", LLONG_MAX);
    printf("\n");
    /* On 64-bit systems, long and long long are both typically 64 bits, so their ranges are identical. */
    /* On 32-bit systems, long is 32 bits, and long long is 64 bits, so their ranges are different. */
    return 0;
}