#include "main.h"

/**
 * jack_bauer - Prints every minute of the day in 24-hour format.
 *
 * Description: This function prints out the minutes and hours in 24-hour format.
 *
 * Return: void
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
