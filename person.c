#include "date.h"
#include "person.h"

#include <stdio.h>
#include <stdlib.h>

void printStr(char* str)
{ 
     
        while(*str)
        { 
                printf("%c",*str);
                str++;
        }
    
}


Person* create_person(char* firstName, char* name, int day, int month, int year)
{
	Person* res = malloc(sizeof(Person));
	res->firstName = firstName;
        res->name = name;	
	res->birthDate = create_date(day, month, year);
	
	return res;
}

void print_person(Person* pers)
{
	printf("Hello, my whole name is ");
	printStr(pers->firstName);
	printf(" ");
	printStr(pers->name);
	printf(" and I was born on ");
	print_date(pers->birthDate);
	printf("It is Nice to meet you!\n");


}
