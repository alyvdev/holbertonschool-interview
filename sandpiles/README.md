# Sandpiles

This project implements the sandpile model, a mathematical model of a dynamical system. The sandpile model is used to study self-organized criticality, a property of dynamical systems that have a critical point as an attractor.

## Files

- `0-sandpiles.c`: Contains the implementation of the sandpile model, including functions to add sandpiles, check stability, and stabilize the sandpile.
- `0-main.c`: Contains the main function to test the sandpile model.
- `sandpiles.h`: Header file containing function prototypes and macro definitions.

## Functions

### sandpiles_sum

```c
void sandpiles_sum(int grid1[3][3], int grid2[3][3]);
```

Adds two sandpiles and stabilizes the resulting sandpile.

### stable

```c
int stable(int grid1[3][3]);
```

Checks if a sandpile is stable.

### stablise

```c
void stablise(int grid1[3][3]);
```

Stabilizes a sandpile by toppling cells with 4 or more grains of sand.

### print_grid

```c
void print_grid(int grid[3][3]);
```

Prints a 3x3 grid.

### print_grid_sum

```c
void print_grid_sum(int grid1[3][3], int grid2[3][3]);
```

Prints the sum of two 3x3 grids.

## Usage

To compile the project, run:

```sh
gcc -Wall -Wextra -Werror -pedantic 0-main.c 0-sandpiles.c -o sandpiles
```

To execute the compiled program, run:

```sh
./sandpiles
```

## Example

The following example demonstrates the addition and stabilization of two sandpiles:

```c
int grid1[3][3] = {
    {3, 3, 3},
    {3, 3, 3},
    {3, 3, 3}
};
int grid2[3][3] = {
    {1, 3, 1},
    {3, 3, 3},
    {1, 3, 1}
};

print_grid_sum(grid1, grid2);
sandpiles_sum(grid1, grid2);
printf("=\n");
print_grid(grid1);
```

Output:

```
3 3 3  +  1 3 1
3 3 3     3 3 3
3 3 3     1 3 1
=
4 6 4
6 12 6
4 6 4
=
2 5 2
5 10 5
2 5 2
=
3 1 3
1 6 1
3 1 3
=
0 3 0
3 2 3
0 3 0
```

## License

This project is licensed under the MIT License.