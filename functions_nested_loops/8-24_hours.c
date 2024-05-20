#include "main.h"

/**
 * Description : script that prints out the minutes and hour to 24 hours.
 * jack_bauer(void) - this is the prototype for the script.
 * @hour - hour counter
 * @minute - minute counter
 */
void jack_bauer(void)
{
	int hour;
	int minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
		}
	}
}
