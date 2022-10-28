#include "main.h"

/**
 *binary_to_uint -  convert to unit.
 *@b: binary parameter.
 *Description - binary_to_uint:  formual form binary to base 10.
 *Return: base 10 unsigned int.
 */
unsigned int binary_to_uint(const char* b)
{
	unsigned int result = 0, i = 0;

	if (b == NULL)
		return (0);
	for (; b[i]; i++)
	{
		if (b[i]) < '0' || b[i] > '1')
		return (0);
		result = (b[i] - '0') + result * 2;
	}
	return (result);
}
