#include "main.h"
/**
 * _isdigit - checking for digits
 * @c: The character that is checked by the function
 * Return: 1 for digit character or 0 for anything else
 */

int _isdigit(int c)

{
if (c >= 45 && c <= 57)
{
return (1);
}
return (0);
}
