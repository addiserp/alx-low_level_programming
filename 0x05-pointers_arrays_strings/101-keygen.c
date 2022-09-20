#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random Passwords
 *return: return is zero
 */
int main(void)
{
	int pwd[100];
	int i, n;
	int val = 0;	

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		pwd[i] = rand() % 48;
		val += (pwd[i] + '0');
		putchar(pwd[i] + '0');
		if ((1551 - val) - '0' < 48)
		{
			n = 1551 - val - '0';
			val += n;
			putchar(n + '0');
			break;
		}
	}

	return (0);
}

