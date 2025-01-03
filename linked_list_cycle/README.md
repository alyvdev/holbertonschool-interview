# Linked List Cycle

This project involves working with singly linked lists in C. The main goal is to detect cycles in a linked list using Floyd's cycle detection algorithm.

## Files

- `0-linked_lists.c`: Contains functions to print, add, and free nodes in a linked list.
- `0-main.c`: Main file to test the linked list functions and cycle detection.
- `lists.h`: Header file containing the definition of the `listint_t` struct and function prototypes.
- `0-check_cycle.c`: Contains the function to detect cycles in a linked list.

## Functions

### `0-linked_lists.c`

- `size_t print_listint(const listint_t *h)`: Prints all elements of a `listint_t` list.
- `listint_t *add_nodeint(listint_t **head, const int n)`: Adds a new node at the beginning of a `listint_t` list.
- `void free_listint(listint_t *head)`: Frees a `listint_t` list.

### `0-check_cycle.c`

- `int check_cycle(listint_t *head)`: Detects a cycle in a linked list using Floyd's cycle detection algorithm.

## Usage

To compile the code, use the following command:

```sh
gcc -Wall -Werror -Wextra -pedantic 0-main.c 0-linked_lists.c 0-check_cycle.c -o cycle
```

Run the executable:

```sh
./cycle
```

## Author

Ali Aliyev