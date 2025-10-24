// Date: 2025-10-21
// Argument Conversions Example Page. 194

#include <stdio.h>

int square(int n);
// In Modern C (C99, C11, C17, C23), implicit function declarations are not allowed
// Because it often led to bugs, if square is defined to take double, but passing int
// may cause unpredictable behavior of the compiler... 

int main(void) {
    double x = 3.0;
    printf("Square: %d\n", square(x));
    
    // Argument conversion: default type promotion
    // Compiler automatically converts x into (int) x

    return 0;
}

int square(int n) {
    return n * n;
}