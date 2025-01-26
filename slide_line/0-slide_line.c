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
    int *working_line;
    int increment;
    size_t start, end;

    /* Validate direction */
    if (direction != SLIDE_LEFT && direction != SLIDE_RIGHT)
        return (0);

    /* Set up direction-specific parameters */
    if (direction == SLIDE_LEFT)
    {
        increment = 1;
        start = 0;
        end = size;
        working_line = line;
    }
    else /* SLIDE_RIGHT */
    {
        increment = -1;
        start = size - 1;
        end = (size_t)-1;  // Use max size_t to avoid signed comparison
        working_line = line + size - 1;
    }

    /* Slide and merge */
    k = 0;
    while (start != end)
    {
        if (working_line[0] != 0)
        {
            /* Look for next non-zero number to merge */
            for (j = 1; j < size; j++)
            {
                if (direction == SLIDE_LEFT)
                {
                    if (line[start + j] != 0)
                    {
                        if (working_line[0] == line[start + j])
                        {
                            working_line[0] *= 2;
                            line[start + j] = 0;
                            break;
                        }
                        else
                            break;
                    }
                }
                else /* SLIDE_RIGHT */
                {
                    if (line[start - j] != 0)
                    {
                        if (working_line[0] == line[start - j])
                        {
                            working_line[0] *= 2;
                            line[start - j] = 0;
                            break;
                        }
                        else
                            break;
                    }
                }
            }

            /* Move non-zero number to temp array */
            temp[k++] = working_line[0];
        }

        /* Move to next element */
        start += increment;
        working_line += increment;
    }

    /* Copy temp array back to original line */
    for (i = 0; i < size; i++)
        line[i] = temp[i];

    return (1);
}