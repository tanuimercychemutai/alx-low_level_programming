#include "stdio.h"

/**
 * _islower - check whether a letter is lower case
 * @c : character to check the case
 * Return:0 if successful or 1 if not
 */

int _islower(int c)
{
	return (c >= 97 && c <= 122);
