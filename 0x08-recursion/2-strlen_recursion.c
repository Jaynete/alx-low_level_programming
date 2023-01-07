#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: The string to be measured
 *
 * Return: the length of a string
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
}

#include <stdio.h>

int _strlen_recursion(char *);

/**
 *main - check the code for Holberton School students.
 *
 *Return: Always 0.
 */
int main(void)
{

	int n;
	
	n = _strlen_recursion("You mustn't be afraid to dream a little bigger, darling.");
	printf("%d\n", n);
	return (0);
}
