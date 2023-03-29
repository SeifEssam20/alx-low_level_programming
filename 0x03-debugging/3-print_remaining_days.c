/**
 * print_remaining_days - Takes a date and prints how many days are left in the year,
 * taking leap years into account.
 * @month: The month of the date.
 * @day: The day of the date.
 * @year: The year of the date.
 */
void print_remaining_days(int month, int day, int year)
{
int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int day_of_year = 0;
int days_remaining = 0;
int i;

// Calculate day of year for non-leap year
for (i = 1; i < month; i++)
{
day_of_year += days_in_month[i];
}
day_of_year += day;

// Check for leap year and adjust day of year and days in February
if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
{
days_in_month[2] = 29;
if (month > 2)
{
day_of_year++;
}
}

// Calculate days remaining in year
days_remaining = 365 - day_of_year;
for (i = month + 1; i <= 12; i++)
{
days_remaining += days_in_month[i];
}

// Print results
if (month < 1 || month > 12 || day < 1 || day > days_in_month[month])
{
printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
}
else if (days_remaining == 0)
{
printf("Day of the year: %d\n", day_of_year);
printf("Happy new year!\n");
}
else
{
printf("Day of the year: %d\n", day_of_year);
printf("Remaining days: %d\n", days_remaining);
}
}
