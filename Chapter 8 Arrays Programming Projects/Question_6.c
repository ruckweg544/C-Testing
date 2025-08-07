// Write a B1FF filter that reads a message entered by the user and translates it into B1FF speak

#include <stdio.h>
#include <ctype.h>

#define DECLARE_INT_I int i;
#define MAX_LEN 100

char alphabet[27];
char B1FF[27];

void printNewLine(void) {
    printf("\n");
}

void alphabetSet(void) {
    DECLARE_INT_I
    for (i = 0; i < 26; i++) {
        alphabet[i] = 'a' + i;
    }
}

void B1FFSet(void) {
    DECLARE_INT_I
    for (i = 0; i < 26; i++) {
        B1FF[i] = 'A' + i;
    }
    B1FF[0] = '4', B1FF[1] = '8', B1FF[4] = '3',
    B1FF[8] = '1', B1FF[14] = '0', B1FF[18] = 'S';
}

char toUpper(char ch) {
    if (ch >= 'a' && ch <= 'z') {
        return B1FF[ch - 'a'];
    } // Let's say if character is 'b', ASCII value of 'b' is 98, which returns B1FF[1] since 98 - 97 = 1
    if (ch >= 'A' && ch <= 'Z') {
        return B1FF[ch - 'A'];
    } // Same concept as explained above
    return ch; // Leave other characters unchanged
}

/* These could be replaced with toupper() function in #include <ctype.h> */

// Main Function

int main(void) {
    alphabetSet();
    B1FFSet();

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
        outMessage[j++] = toUpper(inMessage[i]); 
    } // j gets constantly incremented

    for (int k = 0; k < 10; k++) {
        outMessage[j++] = '!';
    }
    outMessage[j] = '\0';

    printf("In B1FF-speak: %s\n", outMessage);    
    return 0;
}