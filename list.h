#ifndef LIST
#define LIST
#include "date.h"

#include <stdlib.h>

typedef struct _List
	{
		Date* date;
		struct _List* next;
	} List;

List* create_list();
List* insert(Date* date, List* list);
void print_list(List* list);

#endif
