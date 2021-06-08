#include "date.h"

#include <stdio.h>
#include <stdlib.h>


Date* create_date(int day, int month, int year)
{
	// this function creates a date given a day, a month and a year
	

	Date *date = malloc(sizeof(Date));
	date->day = day;
	date->month = month;
	date->year = year;
	
	
	return date;
}

void print_date(Date *date)
{
	// this function prints a date
	
	printf("%d/%d/%d", date->day, date->month, date->year);


}

void compareDate(Date* date1, Date* date2)
{
	
	//this function compares 2 dates and and prints the comparision result
	
	if (date1->day == date2->day && date1->month == date2->month && date1->year == date2->year) 
	{
		printf("The 2 dates are equal!\n");
	}
	else
	{
		printf("The 2 dates are different!\n");
	}
}

Date* duplicateDate(Date* date)
{
	// this function duplicate a date
	
	Date* res = create_date(date->day, date->month, date->year);
	
	return res;

}

