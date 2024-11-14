# Binary Tree Project

This project involves creating and manipulating a binary tree data structure in C. The main functionalities include creating nodes, printing the tree, and measuring the height of the tree.

## Files

- `0-binary_tree_node.c`: Contains the function to create a new binary tree node.
- `binary_tree_print.c`: Contains functions to print the binary tree and measure its height.
- `binary_trees.h`: Header file containing the structure definition and function prototypes.
- `main.c`: Entry point of the program to test the binary tree functionalities.

## Function Descriptions

### `binary_tree_node`

```c
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
```

Creates a new binary tree node with a given parent and value.

### `binary_tree_print`

```c
void binary_tree_print(const binary_tree_t *tree);
```

Prints the binary tree in a structured format.

### `_height`

```c
static size_t _height(const binary_tree_t *tree);
```

Measures the height of the binary tree.

## Usage

Compile the program using `gcc`:

```sh
gcc -Wall -Wextra -Werror -pedantic *.c -o binary_tree
```

Run the executable:

```sh
./binary_tree
```

## Example

The `main.c` file demonstrates how to create a binary tree and print it:

```c
int main(void)
{
    binary_tree_t *root;
    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 12);
    root->left->left = binary_tree_node(root->left, 6);
    root->left->right = binary_tree_node(root->left, 16);
    root->right = binary_tree_node(root, 402);
    root->right->left = binary_tree_node(root->right, 256);
    root->right->right = binary_tree_node(root->right, 512);
    binary_tree_print(root);
    _binary_tree_delete(root);
    return (0);
}
```

This will create and print a binary tree with the specified structure.

## License

This project is licensed under the MIT License.