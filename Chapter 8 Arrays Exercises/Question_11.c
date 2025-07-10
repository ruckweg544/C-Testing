/* Checkerboard generator */

/* 0, 0 - 0, 2 - 0, 4 - 0, 6 … 1, 1 - 1, 3 - 1, 5 - 1, 7
0, 2, 4, 6 … 1, 3, 5, 7 … */

// when rows are even, print 0, 2, 4, 6
// when rows are odd, print 1, 3, 5, 7

#include <stdio.h>

char checker_board[8][8];

int main(void) {
    int row, col;

    /*
    for (row = 0; row < 8; row++)
        if (row % 2 == 0) {
            for (col =  0; col < 8; col++)
                if (col % 2 == 0) checker_board[row][col] = 'b';
                else checker_board[row][col] = 'r';
        }
        else {
            for (col =  0; col < 8; col++)
                if (col % 2 == 1) checker_board[row][col] = 'b';
                else checker_board[row][col] = 'r';
        }
    */

    for (row = 0; row < 8; row++)
        for (col = 0; col < 8; col++)
            checker_board[row][col] = ((row + col) % 2 == 0) ? 'b' : 'r';

    for (row = 0; row < 8; row++)
        for (col = 0; col < 8; col++)
            (col == 7) ?
                printf("%c\n", checker_board[row][col]) :
                printf("%c\t", checker_board[row][col]); 
    return 0;
}