#include<stdio.h>
/* The program computes the value of mathematical constant e */


// Function declaration
float factorial(int x);

int main(void) {
    int n;
    float series, answer;
    printf("e = 1 + 1/1! + 1/2! + 1/3! + … + 1/n!\n");
    printf("Enter n that approximates e: ");
    scanf("%d", &n);
    printf("\n");
    for (int i = 0; i <= n; i++) {
        series  = 1/factorial(i);
        answer += series;
    }

    printf("e = %f\n", answer);
    return 0;
}

// Function definition
float factorial(int x) {
    float fact = 1.0f;
    for (int i = x; i > 0; i--) {
        fact *= i;
    }
    return fact;
}