#include "date.h"
#include "person.h"
#include "list.h"

#include <stdio.h> 
#include <stdlib.h>

int main()
{
	// Date structure
	
	Date* d = create_date(8,6,2021);
	Date* date1 = create_date(5,8,2030);
	Date* date2 = create_date(1,1,1969);
	printf("\n");
	print_date(d);
	printf("\n");
	print_date(date1);
	printf("\n");
	print_date(date2);


	/*-------------------------*/
	// Person structure
	
	printf("\n-----------------------\n");
	
	Person* Aziz = create_person("Abdoul-Aziz", "Hassane", 5, 9, 1999);
	print_person(Aziz);
	
	Person *Zakia = create_person("Zakia", "AbdoulHaq", 7, 6, 2002);
	print_person(Zakia);

	compareDate(Aziz->birthDate, Zakia->birthDate);
	
	Date* AzizBirthdate = duplicateDate(Aziz->birthDate);
	printStr(Aziz->firstName);
	printf(" was born on ");
	print_date(AzizBirthdate); 
	printf("\n");
	Person* solo = duplicatePerson(Aziz);
	print_person(solo);

	
        /*-------------------------*/
        // List structure

	printf("\n-----------------------\n");

	List* list = create_list();
	
	print_list(list);

	insert(AzizBirthdate, list);
	insert(d, list);
	insert(date1, list);
	insert(date2, list);
	print_list(list);

	return 0;
}
