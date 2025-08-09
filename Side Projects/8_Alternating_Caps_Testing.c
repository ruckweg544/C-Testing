// The following program is made to debug and test the random value generator
// Which is utilized to convert an inputted letter into upper or lower case randomly

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

void printNewLine(void) {
    printf("\n");
}

char UpOrLow(char ch) {
    int random = rand() % 100; // gives 0 or 99 (it was originally %2, but I increased the range)
    printf("[Debug] Random value: %d\n", random % 2);
    return (random % 2) ? toupper(ch) : tolower(ch);
}

int main() {
    printf("\033[H\033[J"); // ANSI escape sequence to clear screen and reset cursor
    char letter;
    int testing;
    int testingNum = 1;
    srand(time(NULL));

    printf("Type any non-zero number to start: ");
    scanf("%d", &testing);

    printNewLine();
    printf("------ Testing Activated ------\n");
    printNewLine();

    while (testing) {
        printf("------------ Test %d ------------\n", testingNum++);
        printf("Input any letter: ");
        scanf(" %c", &letter);
        printf("UpOrLow testing: %c\n", UpOrLow(letter));
        printNewLine();
        printf("Type zero to stop: ");
        scanf("%d", &testing);
        printNewLine();
    }
    printf("------ Testing Completed ------\n");
    return 0;
}