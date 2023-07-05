#include "main.h"


int _strlen(char *s);

int check_palindrome(char *s, int left_index, int right_index);

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 *
 * @s: string to check
 *
 * Return: 1 if the given string is a palindrome 0 if not
*/

int is_palindrome(char *s)
{
	int len = _strlen(s);

	if (!(*s))
		return (1);

	return (check_palindrome(s, 0, len - 1));
}


/**
 * _strlen - returns the length of a string
 *
 * @s: string to calculate the length of
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}


/**
 * check_palindrome - Checks if a string is a palindrome.
 *
 * @s: The string to be checked.
 *
 * @right_index: The index of the string to the right.
 *
 * @left_index: The index of the string to the left.
 *
 * Return: If the string is a palindrome - 1.
 *         If the string is not a palindrome - 0.
 */

int check_palindrome(char *s, int left_index, int right_index)
{
	if (left_index >= right_index)
		return (1);
	else if (s[left_index] == s[right_index])
		return (check_palindrome(s, left_index + 1, right_index - 1));
	return (0);

}
