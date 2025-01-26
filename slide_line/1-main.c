#include <stdlib.h>
#include <stdio.h>

#include "slide_line.h"

#define LINE_SIZE   32

/**
 * print_array - Prints out an array of integers, followed by a new line
 * 
 * @array: Pointer to the array of integers to be printed
 * @size: Number of elements in @array
 */
static void print_array(int const *array, size_t size)
{
    size_t i;

    printf("Line: ");
    for (i = 0; i < size; i++)
        printf("%s%d", i > 0 ? ", " : "", array[i]);
    printf("\n");
}

/**
 * main - Additional test cases for slide_line function
 *
 * Return: EXIT_SUCCESS or EXIT_FAILURE
 */
int main(void)
{
    int test_cases[][LINE_SIZE] = {
        {1, 2, 3, 4, 5, 0, 0, 0},           /* No merge possible */
        {2, 2, 2, 2, 0, 0, 0, 0},            /* Multiple merges */
        {0, 0, 0, 2, 0, 0, 0, 2},            /* Zeros in between */
        {16, 8, 4, 2, 0, 0, 0, 0},           /* Descending order */
        {1, 1, 1, 1, 1, 1, 1, 1}             /* Repeated numbers */
    };
    
    size_t test_sizes[] = {8, 8, 8, 8, 8};
    int directions[] = {SLIDE_LEFT, SLIDE_RIGHT};
    size_t i, j;

    for (j = 0; j < sizeof(directions)/sizeof(directions[0]); j++)
    {
        for (i = 0; i < sizeof(test_cases)/sizeof(test_cases[0]); i++)
        {
            int line[LINE_SIZE];
            size_t size = test_sizes[i];

            /* Copy test case to working array */
            for (size_t k = 0; k < size; k++)
                line[k] = test_cases[i][k];

            printf("Test %zu (Direction: %s):\n", 
                   i + 1, 
                   directions[j] == SLIDE_LEFT ? "LEFT" : "RIGHT");
            
            print_array(line, size);

            if (!slide_line(line, size, directions[j]))
            {
                fprintf(stderr, "Slide line failed\n");
                return EXIT_FAILURE;
            }

            print_array(line, size);
            printf("\n");
        }
    }

    return EXIT_SUCCESS;
}
