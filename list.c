#include "list.h"
#include "date.h"

#include <stdio.h>
#include <stdlib.h>

List* create_list()
{
	// this function creates an empty list
	
	List* res = malloc(sizeof(List));
	res->nbElements = 0;
	res->p = (Date*) malloc(res->nbElements*sizeof(Date));	
	return res;

}


List* insert(Date* date, List* list)
{
	//this function insertes a date into the list
	
	list->nbElements++;
	list->p = (Date*) realloc(list->p, list->nbElements*sizeof(Date));

	if(list->nbElements == 1) // means the initial list was empty
	{
		*(list->p) = *date;
		return list;
	}
	else
	{
		Date* dateTemp;
	
		for(int i=list->nbElements; i>0; i--) // move your elements forward
		{
			dateTemp = (list->p + i - 1); // get the previous element of your list
			*(list->p + i) = *dateTemp; // move it forward
			 
		}
		
		*(list->p) = *date;// insert element in the list
		
		return list;
	}
		
	
}


void print_list(List* list)
{

	// this function prints a python list of dates contained in list

	Date *p = list->p;// create a copy of the adress of the list
	printf("votre liste contient %d date(s)\n",list->nbElements);
	printf("[");

	if(list->nbElements == 0 )
	{
		printf("]\n");
	}
	else
	{
		for(int i = 0; i < list->nbElements - 1; i++) // display all elements before the last one
		{
			print_date(p+i);
			printf(", ");
		}	

		
	print_date(p + list->nbElements - 1); //display the last element and close the list
	printf("]\n");

	}
	

}
