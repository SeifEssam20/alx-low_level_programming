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
int i, j, k ;
for(j=1; j<=10; j++)
{
for(k=0; k<=14; k++)
{
i = k ;
if(k > 9)
{
_putchar(1+48);
num = count % 10;
}
_putchar(num+48);
}
_putchar('\n');
}
}
