#include "palindrome.h"

/**
 * is_palindrome - checks is unsigned long is a palindrome
 * @n: unsigned long integer to check
 * Return: 1 if palindrome else 0
 */

int is_palindrome(unsigned long n)
{
    unsigned long rev = 0, temp = n;

    while (temp != 0)
    {
        rev = rev * 10;
        rev = rev + temp % 10;
        temp = temp / 10;
    }

    if (n == rev)
        return (1);
    return (0);
}