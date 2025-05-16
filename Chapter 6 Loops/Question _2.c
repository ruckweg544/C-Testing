#include <stdio.h>

int main(void) {
    int num_1, num_2, big, small;
    printf("Enter two integers: ");
    scanf("%d %d", &num_1, &num_2);
    num_1 > num_2 ? big = num_1, small = num_2 : big = num_2, small = num_1;
    
}