#include "date.h"

#include <stdio.h>
#include <stdlib.h>


Date* create_date(int day, int month, int year)
{

	Date *date = malloc(sizeof(Date));
	date->day = day;
	date->month = month;
	date->year = year;
	
	
	return date;
}

void print_date(Date *date)
{

	printf("la date: %d\\%d\\%d\n", date->day, date->month, date->year);


}
