#include <stdio.h>
#include <math.h>
#include "menger.h"

/**
 * is_center - Check if a position is the center of a 3x3 grid
 * @row: Row index
 * @col: Column index
 * Return: 1 if center, 0 otherwise
 */
int is_center(int row, int col)
{
    return (row % 3 == 1 && col % 3 == 1);
}

/**
 * menger - Draw a 2D Menger Sponge
 * @level: Level of the Menger Sponge
 */
void menger(int level)
{
    int size, row, col;

    if (level < 0)
        return;

    size = pow(3, level);

    for (row = 0; row < size; row++)
    {
        for (col = 0; col < size; col++)
        {
            int current_row = row, current_col = col;
            int is_empty = 0;

            while (current_row > 0 || current_col > 0)
            {
                if (is_center(current_row, current_col))
                {
                    is_empty = 1;
                    break;
                }
                current_row /= 3;
                current_col /= 3;
            }

            printf("%c", is_empty ? ' ' : '#');
        }
        printf("\n");
    }
}