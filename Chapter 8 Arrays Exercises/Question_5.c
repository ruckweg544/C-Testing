/* The Fibonacci number generator: an array of length 40 */
/* filled with the first 40 Fibonacci numbers*/

#include <stdio.h>

#define LEN 40

int fib_numbers[LEN] = {0, 1}; // Global, so print_fib can access.

void print_fib(int n);
int numDigits(long long n);

int main(void) {
    int i, j = 0;

    for (i = 2; i < LEN; i++) {
        fib_numbers[i] = fib_numbers[i - 2] + fib_numbers[i - 1];
    }
    printf("First 40 Fibonacci numbers:\n");
    for (i = 0; i < LEN; i++) {
        (numDigits((long long)fib_numbers[i]) < 8) ? print_fib(i), printf("\t") : print_fib(i), printf("\t");
        if ((i + 1) % 10 == 0) printf("\n");
    }
    return 0;
}

void print_fib(int n) {
    printf("%d", fib_numbers[n]);
}

int numDigits(long long n) {
    if (n < 10) return 1;
    return 1 + numDigits(n / 10);
}