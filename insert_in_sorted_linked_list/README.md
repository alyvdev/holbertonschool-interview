# Linked List Project

This project demonstrates the implementation and manipulation of a singly linked list in C. It includes functions to add nodes to the end of the list, insert nodes in a sorted order, print the list, and free the list.

## Files

- `0-main.c`: Contains the `main` function to test the linked list functions.
- `linked_lists.c`: Contains the implementation of the linked list functions.
- `lists.h`: Header file containing the definition of the `listint_t` structure and function prototypes.
- `0-insert_number.c`: Contains the implementation of the `insert_node` function.
- `README.md`: This file.

## Functions

### `print_listint`

```c
size_t print_listint(const listint_t *h);

Prints all elements of a listint_t list.

add_nodeint_end
listint_t *add_nodeint_end(listint_t **head, const int n);

Adds a new node at the end of a listint_t list.

free_listint
void free_listint(listint_t *head);

Frees a listint_t list.

insert_node
listint_t *insert_node(listint_t **head, int number);
Inserts a new node in a sorted listint_t list.

Usage
To compile the project, use the following command:

gcc -Wall -Werror -Wextra -pedantic [0-main.c](http://_vscodecontentref_/1) [linked_lists.c](http://_vscodecontentref_/2) [0-insert_number.c](http://_vscodecontentref_/3) -o linked_list

To run the compiled program:
./linked_list

Example Output
0
1
2
3
4
98
402
1024
-----------------
0
1
2
3
4
27
98
402
1024

License
This project is licensed under the MIT License.

This [README.md](http://_vscodecontentref_/4) provides an overview of the project, details about the files and functions, usage instructions, and an example output.
