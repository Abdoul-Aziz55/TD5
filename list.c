#include "list.h"
#include "date.h"

#include <stdio.h>
#include <stdlib.h>

List* create_list()
{
	// this function creates an empty list
	
	//List* res = NULL;
	return NULL;

}


List* insert(Date* d, List* list)
{
	//this function inserts a date into the list
	List* res = malloc(sizeof(List));
	res->date = d;
	res->next = list;
	
	return res;
	
}


void print_list(List* list)
{
	
	// this function prints a python list of dates contained in list
	printf("[ ");
	while(list!= NULL)
	{
		print_date(list->date);
		printf(" ");
		list = list->next;
	}
	printf("]\n");

}
