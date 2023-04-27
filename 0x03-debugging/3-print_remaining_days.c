#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
	int i, many[] = {1, 3, 5, 7, 8, 10, 12}, little[] = {4, 6, 9, 7, 11};

	for (i = 0; i < 8; i++)
	{
		if (month == many[i] && day > 31)
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
	}
	for (i = 0; i < 8; i++)
	{
		if (month == little[i] && day > 31)
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
	}
	if (month == 2 && day > 29)
		printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);

	if (year % 4 == 0)
	{
		if (month >= 2 && day >= 60)
		{
			day++;
		}

		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 366 - day);
	}
	else
	{
		if (month == 2 && day == 60)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
		}
		else
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 365 - day);
		}
	}
}
