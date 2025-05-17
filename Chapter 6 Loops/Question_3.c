/* The program asks the user to enter a fraction, then reduces the fraction to lowest terms. */

#include <stdio.h>

int main(void) {
    int m, n, big, small, tmp;
    printf("Enter a fraction: ");
    scanf("%d/%d", &m, &n);
    m > n ? (big = m, small = n) : (big = n, small = m);
    
    while (small != 0) {
        tmp = small;
        small = big % small;
        big = tmp;
    }
    printf("In lowest terms: %d/%d\n", m/big, n/big);
    return 0;
}
