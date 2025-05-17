#include<stdio.h>

int main(void) {
    int days, start, temp_1 = 0, temp_2 = 0;

    printf("Enter number of days in month: ");
    scanf("%d", &days);
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &start);
    printf("\n");

    while (temp_2 < days) {
        for(int i = 0; i < start; i+=1) {
        printf("   ");
        temp += 1;
        }
        
    }

}