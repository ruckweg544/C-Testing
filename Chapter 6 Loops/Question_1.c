// The program finds the largest in a series of numbers entered by the user. 
// The program prompts the user to enter numbers one by one. 
// When the user enters 0 or a negative number, the program must display the largest non-negative number entered

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
