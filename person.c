#include "date.h"
#include "person.h"

#include <stdio.h>
#include <stdlib.h>

void printStr(char* str)
{ 
	// extra function to print a char
     
        while(*str)
        { 
                printf("%c",*str);
                str++;
        }
    
}


Person* create_person(char* firstName, char* name, int day, int month, int year)
{
	// this function creates a person given the needed elements

	Person* res = malloc(sizeof(Person));
	res->firstName = firstName;
        res->name = name;	
	res->birthDate = create_date(day, month, year);
	
	return res;
}

void print_person(Person* pers)
{
	// this function prints a person with a custom message
	
	printf("Hello, my whole name is ");
	printStr(pers->firstName);
	printf(" ");
	printStr(pers->name);
	printf(" and I was born on ");
	print_date(pers->birthDate);
	printf("\nIt is Nice to meet you!\n");


}

Person* duplicatePerson(Person* pers)
{
	// this function duplicates a person

	Person* res = malloc(sizeof(Person));
	res->firstName = pers->firstName;
        res->name = pers->name;
        res->birthDate = duplicateDate(pers->birthDate);  

	return res;
}
