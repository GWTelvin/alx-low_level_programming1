#include <stdio.h>
/*
 * main - Entry point
 * Description: using the main function 
 * this program prints "Programming is positive, zero, or negative
 * Return: Always 0 (Success/correct)
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}

	putchar('\n');

	return (0);
}
