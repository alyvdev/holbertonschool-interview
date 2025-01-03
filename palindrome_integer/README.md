# Palindrome Integer

This project contains a C program that checks if an unsigned long integer is a palindrome.

## Files

- `0-main.c`: Contains the `main` function which serves as the entry point of the program.
- `0-is_palindrome.c`: Contains the `is_palindrome` function which checks if an unsigned long integer is a palindrome.
- `palindrome.h`: Header file that contains the function prototype for `is_palindrome`.

## Usage

To compile the program, use the following command:

```sh
gcc -Wall -Werror -Wextra -pedantic 0-main.c 0-is_palindrome.c -o palindrome
```

To run the program, use the following command:

```sh
./palindrome <number>
```

Replace `<number>` with the unsigned long integer you want to check.

## Example

```sh
./palindrome 12321
12321 is a palindrome.
```

```sh
./palindrome 12345
12345 is not a palindrome.
```

## Function

### `is_palindrome`

```c
int is_palindrome(unsigned long n);
```

- **Description**: Checks if an unsigned long integer is a palindrome.
- **Parameters**: 
    - `n`: The unsigned long integer to check.
- **Return Value**: 
    - `1` if the number is a palindrome.
    - `0` otherwise.

## License

This project is licensed under the MIT License.