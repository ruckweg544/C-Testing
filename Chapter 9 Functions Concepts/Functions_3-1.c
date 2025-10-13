// Date: 2025-10-13
// The following example program demonstrates Argument executions

#include<stdio.h>

// First Method
int power_1(int x, int n) {
    int i, result = 1;
    for (i = 1; i <= n; i++)
        result = result * x;
    return result;
}

// Second Method
int power_2(int x, int n) {
    int result = 1;
    while (n-- > 0)
        result = result * x;
    return result;
}

int main(void) {
    int a, b;
    
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    // Both results are equivalent of one another
    printf("%d power of %d: %d\n", a, b, power_1(a, b));
    printf("%d power of %d: %d\n", a, b, power_2(a, b));
    return 0;
}