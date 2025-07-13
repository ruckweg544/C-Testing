// The program should output the numbers in the long int that are repeated
// Example: when 979335 is entered, it should output 9 and 3

#include <stdbool.h>
#include <stdio.h>

int digit_count[10] = {0};

void digit_count_1(int n) {
    digit_count[n]++;
}

int main(void) {
    bool digit_seen[10] = {false};
    int digit; 
    long n;
    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0) {
        digit = n % 10;
        digit_count_1(digit);
        if (!digit_seen[digit]) digit_seen[digit] = true;
        n /= 10;
    }
    
    printf("Repeated digit(s): ");
    for (int i = 0; i < 10; i++) {
        if (digit_count[i] > 1) printf("%2d", i);
    }
    printf("\n");
    return 0;
}