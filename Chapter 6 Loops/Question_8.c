#include<stdio.h>

int main(void) {
    int days, start, temp = 0;

    printf("Enter number of days in month: ");
    scanf("%d", &days);
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &start);
    printf("\n");
    
    for(int i = 1; i < start; i+=1) {
        printf("   ");
        temp += 1;
    }

    for (int j = 1; j <= days; j+=1) {
        if (temp < 6) {
            printf("%2d ", j);
            temp += 1;
        }
        else {
            printf("%2d\n", j);
            temp = 0;
        }
    }
    printf("\n");
    return 0;
}