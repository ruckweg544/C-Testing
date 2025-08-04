// modified version of repdigit.c so that user can enter more than one number to be checked for repeated digits
// the program should terminate once the user enters a number less or equals to 0

#include <stdbool.h>
#include <stdio.h>

int main(void) {
    bool digit_seen[10] = {false};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0) {
        while (n > 0) {
            digit = n % 10;
            if (digit_seen[digit])
                break;
            digit_seen[digit] = true;
            n /= 10;
        }

        if (n > 0)
            printf("Repeated digit\n");
        else
            printf("No repeated digit\n");

        for (int i = 0; i < 10; i++) {
            digit_seen[i] = false;
        }
        printf("Enter a number: ");
        scanf("%ld", &n);
    }
    printf("\n");
    printf("The program is terminated\n");
    return 0;
}