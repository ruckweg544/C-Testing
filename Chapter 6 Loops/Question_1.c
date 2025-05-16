#include <stdio.h>

int main(void) {
    float num_input, num_largest;
    printf("Enter a number: ");
    scanf("%f", &num_input);
    num_largest = num_input;
    while (num_input > 1) {
        if (num_input > num_largest) {
            num_input = num_largest;
        }
        printf("Enter a number: ");
        scanf("%f", &num_input);
    }
    printf("\n");
    printf("The largest number entered was %.2f\n", num_largest);
    return 0;
}