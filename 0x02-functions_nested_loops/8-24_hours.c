#include "main.h"

/**
 * jack_bauer ->  a function that prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
 *
 * Return: void (no return)
 */
void jack_bauer(void)
{
	int hr, min;

	for (hr = 0; hr < 24; hr++)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar('0' + hr / 10);
			_putchar('0' + hr % 10);
			_putchar(':');
			_putchar('0' + min / 10);
			_putchar('0' + min % 10);
			_putchar('\n');
		}
	}
}
