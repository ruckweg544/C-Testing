// The following program receives a sentence in character
// Converts each character into lower or upper case randomly

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

#define DECLARE_INT_I int i;
#define MAX_LEN 100

void printNewLine(void) {
    printf("\n");
}

char UpOrLow(char ch) {
    int random = rand() % 100; // gives 0 or 99 (it was originally %2, but I increased the range)
    // printf("[Debug] Random value: %d\n", random % 2);
    return (random % 2) ? toupper(ch) : tolower(ch);
}

int main(void) {
    printf("\033[H\033[J"); // ANSI escape sequence to clear screen and reset cursor
    char inMessage[MAX_LEN];
    char outMessage[MAX_LEN * 2];
    int i = 0, j = 0;
    char ch;

    printf("Enter message: ");
    while ((ch = getchar()) != '\n' && i < MAX_LEN - 1) {
        inMessage[i++] = ch;
    }
    inMessage[i] = '\0';

    for (i = 0; inMessage[i] != '\0'; i++) {
        outMessage[j++] = UpOrLow(inMessage[i]); 
    } // j gets constantly incremented
    outMessage[j] = '\0';

    printf("In Alternating Caps: %s\n", outMessage);    
    return 0;
}