#include "main.h"

/**
 * jack_bauer - prints every minute of the
 * day of Jack Bauer, starting from 00:00 to 23:59.
 *
 * Return: void.
 */
void jack_bauer(void)
{
	int max_hours, tens_hours, units_hours, tens_minutes, units_minutes;

	max_hours = 58;
	tens_hours = '0';

	while (tens_hours < '3')
	{
		if (tens_hours == '2')
		{
			max_hours = '4';
		}
		units_hours = '0';
		while (units_hours < max_hours)
		{
			tens_minutes = '0';
			while (tens_minutes < '6')
			{
				units_minutes = '0';
				while (units_minutes < 58)
				{
					_putchar(tens_hours);
					_putchar(units_hours);
					_putchar(':');
					_putchar(tens_minutes);
					_putchar(units_minutes);
					_putchar('\n');
					units_minutes++;
				}
				units_minutes = '0';
				tens_minutes++;
			}
			tens_minutes = '0';
			units_hours++;
		}
		units_hours = '0';
		tens_hours++;
	}
}
