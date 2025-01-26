#include "slide_line.h"

/**
 * slide_line - Slides and merges an array of integers
 * @line: Pointer to the array of integers
 * @size: Number of elements in the array
 * @direction: Direction to slide (SLIDE_LEFT or SLIDE_RIGHT)
 *
 * Return: 1 on success, 0 on failure
 */
int slide_line(int *line, size_t size, int direction)
{
    size_t i, j, k;
    int temp[32] = {0};  /* Assuming max size of 32 as per problem constraints */
    
    /* Validate direction */
    if (direction != SLIDE_LEFT && direction != SLIDE_RIGHT)
        return (0);

    if (direction == SLIDE_LEFT)
    {
        /* Slide and merge to the left */
        k = 0;
        for (i = 0; i < size; i++)
        {
            if (line[i] == 0)
                continue;

            /* Look for merge candidates */
            for (j = i + 1; j < size; j++)
            {
                if (line[j] == 0)
                    continue;
                
                if (line[i] == line[j])
                {
                    line[i] *= 2;
                    line[j] = 0;
                    break;
                }
                else
                    break; /* Important: If not equal, stop looking for merge */
            }
        }

        /* Compact the array */
        k = 0;
        for (i = 0; i < size; i++)
        {
            if (line[i] != 0)
                temp[k++] = line[i];
        }

        /* Zero-fill the remaining */
        for (i = k; i < size; i++)
            temp[i] = 0;

        /* Copy back to original array */
        for (i = 0; i < size; i++)
            line[i] = temp[i];
    }
    else /* SLIDE_RIGHT */
    {
        /* Slide and merge to the right */
        
         for (i = size - 1; i > 0; i--)
        {
            if (line[i] == 0)
                continue;

            /* Look for merge candidates */
            for (j = i - 1; j >= 0; j--)
            {
                if (line[j] == 0)
                    continue;
                
                if (line[i] == line[j])
                {
                    line[i] *= 2;
                    line[j] = 0;
                    break;
                }
                else
                    break; /* Important: If not equal, stop looking for merge */
            }
        }

        /* Compact the array */
        k = 0;
        for (i = size - 1; i >= 0; i--)
        {
            if (line[i] != 0)
                temp[k++] = line[i];
        }

         /* Reverse the compacted array and copy back to original array */
        for (i = 0; i < k; i++)
             line[size - 1 - i] = temp[i];

        /* Zero-fill the remaining */
        for (i = k; i < size; i++)
            line[size - 1 - i] = 0;
        
    }

    return (1);
}