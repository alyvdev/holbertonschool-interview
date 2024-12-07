# Linked List Palindrome

This project contains a set of functions to manipulate singly linked lists and check if a linked list is a palindrome.

## Files

- `0-is_palindrome.c`: Contains the function to check if a singly linked list is a palindrome.
- `linked_lists.c`: Contains helper functions to manipulate linked lists, such as adding nodes, printing the list, and freeing the list.
- `0-main.c`: Contains the main function to test the palindrome checker.
- `lists.h`: Header file containing the definition of the `listint_t` struct and function prototypes.

## Functions

### `0-is_palindrome.c`

- `int is_palindrome(listint_t **head)`: Checks if a singly linked list is a palindrome.

### `linked_lists.c`

- `size_t print_listint(const listint_t *h)`: Prints all elements of a `listint_t` list.
- `listint_t *add_nodeint_end(listint_t **head, const int n)`: Adds a new node at the end of a `listint_t` list.
- `void free_listint(listint_t *head)`: Frees a `listint_t` list.
- `listint_t *reverse_listint(listint_t **head)`: Reverses a linked list.

### `0-main.c`

- Contains the main function to test the palindrome checker.

### `lists.h`

- Header file containing the definition of the `listint_t` struct and function prototypes.

## Usage

1. Compile the code:
    ```sh
    gcc -Wall -Werror -Wextra -pedantic 0-main.c 0-is_palindrome.c linked_lists.c -o palindrome
    ```

2. Run the executable:
    ```sh
    ./palindrome
    ```

## Example

The `0-main.c` file creates a linked list with the following elements: `1 -> 17 -> 972 -> 50 -> 98 -> 98 -> 50 -> 972 -> 17 -> 1`. The program will check if this linked list is a palindrome and print the result.
