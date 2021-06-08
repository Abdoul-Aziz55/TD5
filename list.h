#ifndef LIST
#define LIST
#include "date.h"

#include <stdlib.h>

typedef struct _List
	{
		int nbElements;
		Date* p;
	
	} List;

List* create_list();
List* insert(Date* date, List* list);
void print_list(List* list);

#endif
