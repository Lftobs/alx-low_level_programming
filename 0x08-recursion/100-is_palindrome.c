#include "main.h"


int _strlen_recursion(char *s);
int rev_palindrome(char *s, int len);

/**
 *_strlen_recursion - Entry
 * @s: Ifc
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (_strlen_recursion(s + 1) + 1);
}

/**
 * is_palindrome - Entry (function that checks if s is a palindrome string)
 * @s:  inpuit string
 * Return: 0 or 1
 */
int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);
	if (len <= 1)
		return (1);
	return (rev_palindrome(s, len));
}

/**
 * rev_palindrome - Entry (A function with a revesed string)
 * @s: An input string
 * @len: length of  string s
 * Return: 0
 */
int rev_palindrome(char *s, int len)
{
	if (len <= 1)
		return (1);
	else if (*s == *(s + len - 1))
	{
		return (rev_palindrome(s + 1, len - 2));
	}
	else
		return (0);

}
