#include "main.h"

/**
 * _islower -> checks is the character is lowercase
 *@c:is the int that will use for the argument of the function
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
