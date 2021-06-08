#include "date.h"
#include "person.h"

#include <stdio.h> 
#include <stdlib.h>

int main()
{
	// Date structure
	
	Date* d = create_date(8,6,2021);
	Date* date1 = create_date(5,8,2030);
	Date* date2 = create_date(5,9,1999);
	printf("\n");
	print_date(d);
	printf("\n");
	print_date(date1);
	printf("\n");
	print_date(date2);


	/*-------------------------*/
	// Person structure
	
	printf("\n-----------------------\n");
	char* firstName = "Abdoul-Aziz";
	char* name = "Hassane";
	
	Person* Aziz = create_person(firstName, name, 5, 9, 1999);
	print_person(Aziz);
	
	return 0;
}
