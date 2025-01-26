# Slide Line Algorithm

## Overview
This project implements a sliding and merging algorithm inspired by the game 2048. The algorithm can slide and merge integers in a line either to the left or right, following specific rules.

## Algorithm Description
The `slide_line` function takes an array of integers and performs the following operations:
- Slides all non-zero numbers in the specified direction
- Merges adjacent equal numbers
- Maintains the original order of non-zero numbers

### Key Features
- Supports sliding in two directions: LEFT and RIGHT
- Handles arrays up to 32 elements
- Returns success (1) or failure (0) status

## Function Signature
```c
int slide_line(int *line, size_t size, int direction);
```

### Parameters
- `line`: Pointer to the integer array
- `size`: Number of elements in the array
- `direction`: Sliding direction (SLIDE_LEFT or SLIDE_RIGHT)

### Return Value
- `1`: Operation successful
- `0`: Operation failed (invalid direction)

## Example
```c
int line[4] = {2, 2, 0, 0};
int result = slide_line(line, 4, SLIDE_LEFT);
// Result: line becomes {4, 0, 0, 0}
```

## Compilation
Compile with:
```bash
gcc -Wall -Werror -Wextra -pedantic 0-main.c 0-slide_line.c -o slide_line
```

## Usage
Include the `slide_line.h` header and call the `slide_line` function with your integer array.

## Constraints
- Maximum array size: 32 elements
- Supports only LEFT and RIGHT sliding directions

## Author
[Your Name]

## License
This project is part of the Holberton School interview preparation challenges.
