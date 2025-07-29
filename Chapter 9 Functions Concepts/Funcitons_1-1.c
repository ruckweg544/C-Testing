#include <stdio.h>

double average1 (double a, double b) {
    return (a + b) / 2.0;
} // it is illegal to comit the return type of a function

double average2 (double a, double b) {
    double sum; // Declaration
    sum = a + b; // Statement
    return sum / 2.0; // Statement
}

int main(void) {
    double x  = 4.0, y = 4.0;
    printf("%.3f\n", average1(x, y));
    printf("%.3f\n", average2(x, y));
    return 0;
}