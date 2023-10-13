#include <stdio.h>

/* Function to convert month and day to a day of the year */
int convert_day(int month, int day)
{
    int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int day_of_year = 0;
    
    for (int i = 1; i < month; i++)
    {
        day_of_year += days_in_month[i];
    }
    
    day_of_year += day;
    
    return day_of_year;
}

/* Function to print remaining days in the year */
void print_remaining_days(int month, int day, int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
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
        printf("Day of the year: %d\n", day);
        printf("Remaining days: %d\n", 365 - day);
    }
}

int main(void)
{
    int month, day, year;


    day = convert_day(month, day);
    print_remaining_days(month, day, year);

    return 0;
}

