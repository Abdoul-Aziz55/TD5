#ifndef PERSON
#define PERSON

#include "date.h"
typedef struct _Person{

		char* firstName;
		char* name;
		Date* birthDate;
	} Person;
void printStr(char* str);
Person* create_person(char* firstName, char* name, int day, int month, int year);
void print_person(Person* pers);
#endif
