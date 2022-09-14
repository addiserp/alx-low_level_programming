#include "main.h"
/**
 * jack_bauer - function for print day of minites
 * Description: print 24h in minite
 *@x: is used for input parameter
 * Return: void
 */
void jack_bauer(void)
{
int min, hr;
int mod_min, mod_hr;
mod_hr = 0;
mod_min = 0;
for (hr = 0;hr < 24;hr++)
	for (min =0 ;min < 60;min++)
	{
		mod_hr = hr % 10;
		_putchar(hr / 10 + '0');
		_putchar(mod_hr + '0');
		_putchar(':');
		_putchar(min / 10 + '0');
		_putchar(mod_min + '0');
		_putchar('\n');
	}
}