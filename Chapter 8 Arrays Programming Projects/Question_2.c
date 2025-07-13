// When the long int is entered, the program prints a table
// showing how many times each digit appears in the number

#include <stdbool.h>
#include <stdio.h>

int digit_count[10] = {0};

void digit_count_1(int n) {
    digit_count[n]++;
}
void printNewLine(void) {
    printf("\n");
}

int main(void) {
    bool digit_seen[10] = {false};
    int digit, i;
    long n;
    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0) {
        digit = n % 10;
        digit_count_1(digit);
        if (!digit_seen[digit]) digit_seen[digit] = true;
        n /= 10;
    }
    printf("Digit:\t\t");
    for (i = 0; i < 10; i++) printf("%4d", i);
    printNewLine();

    printf("Occurences:\t");
    for (i = 0; i < 10; i++) printf("%4d", digit_count[i]);
    printNewLine();
    return 0;
}