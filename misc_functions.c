#include "main.h"
/**
 * _strlen - lenght of string
 *
 * @s: entry string
 * Return: int
 */
int _strlen(char *s)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
/**
 * _putchar - prints the characters
 *
 * @buff: Entry pointer to print
 * @sizebuff: Size to print
 * Return: printing on screen
 */
int _putchar(char *buff, int sizebuff)
{
	return (write(1, buff, sizebuff));
}
