#include "main.h"

/**
 *get_endianness - get binary on specific index.
 *Description - get_endianness: get binary on specific index.
 *Return: int.
 */
int get_endianness(void)
{
	int n = 1;
	char* en = (char*)&n;
	if (*en == 1)
		return (1);
	return (0);
}
