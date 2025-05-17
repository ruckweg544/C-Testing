// The program asks the user to enter two integers, then calculates and display greatest common divisor (GCD)

#include <stdio.h>

int main(void) {
    int num_1, num_2, big, small, tmp;
    printf("Enter two integers: ");
    scanf("%d %d", &num_1, &num_2);
    num_1 > num_2 ? (big = num_1, small = num_2) : (big = num_2, small = num_1);
    
    while (small != 0) {
        tmp = small;
        small = big % small;
        big = tmp;
    }
    printf("Greatest common divisor: %d\n", big);
    return 0;
}
