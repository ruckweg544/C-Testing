#include <stdio.h>

// ANSI background color codes
const char* colors[] = {
    "\033[40m", // Black
    "\033[41m", // Red
    "\033[42m", // Green
    "\033[43m", // Yellow
    "\033[44m", // Blue
    "\033[45m", // Magenta
    "\033[46m", // Cyan
    "\033[47m"  // White
};

// Function to print the board
void print_checkerboard(int board[8][8]) {
    for (int row = 0; row < 8; row++) {
        for (int height = 0; height < 2; height++) {  // Print each row twice for square appearance
            for (int col = 0; col < 8; col++) {
                int color = board[row][col] % 8;
                printf("%s  ", colors[color]); // Two spaces with background color
            }
            printf("\033[0m\n"); // Reset color and move to next line
        }
    }
}

int main(void) {
    int board[8][8];

    // Fill the checkerboard with alternating colors
    for (int row = 0; row < 8; row++) {
        for (int col = 0; col < 8; col++) {
            board[row][col] = (row + col) % 2 == 0 ? 7 : 1; // white and red
        }
    }

    print_checkerboard(board);

    return 0;
}
