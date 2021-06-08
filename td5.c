#include "date.h"

#include <stdio.h> 
#include <stdlib.h>

int main()
{


	Date* d = create_date(8,6,2021);
	Date* date1 = create_date(5,8,2030);
	Date* date2 = create_date(5,9,1999);
	print_date(d);
	printf("\n");
	print_date(date1);
	printf("\n);
	print_date(date2);

	return 0;
}
