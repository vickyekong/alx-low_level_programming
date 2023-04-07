#include "main.h"
/**
 * _pow_recursion - Returns the value of x raised to the power of y
 * @X: the value to multiply
 * @y: the times to multiply the value
 *
 * Return: the value multiplied y times
 */
int _por_recursion(int X, int y)
{
	if (y < 0)
	return (-1);

	if (y == 0)
	return (1);

	return (X * _pow_recursion(X, y - 1));

}
