# 2D Menger Sponge Generator

## Description
This project implements a function to draw a 2D Menger Sponge at different levels of recursion. 

### Menger Sponge Characteristics
- Level 0: A simple 1x1 square ('#')
- Level 1: A 3x3 grid of level 0 sponges, with the center left empty
- Higher levels: Recursively apply the same pattern

## Function Prototype
```c
void menger(int level);
```

### Parameters
- `level`: The recursion level of the Menger Sponge
  - If `level` is negative, nothing is drawn

## Compilation
```bash
gcc -Wall -Wextra -Werror -pedantic -o menger 0-menger.c 0-main.c -lm
```

## Usage
```bash
./menger <level>
```

## Example Outputs
```
# Level 0
#

# Level 1
###
# #
###

# Level 2
#########
# ## ## #
#########
###   ###
# #   # #
###   ###
#########
# ## ## #
#########
```

## Author
Created as part of a Holberton School interview preparation task.