all: td5


date.o: date.c date.h
	gcc -Wall -c date.c

person.o: person.c person.h date.c date.h
	gcc -Wall -c person.c

list.o: list.c list.h date.c date.h
	gcc -Wall -c list.c

td5.o: td5.c date.c date.h person.c person.h
	gcc -Wall -c td5.c

td5: td5.o date.o person.o list.o
	gcc -Wall -o td5 date.o person.o list.o td5.o;./td5

clean: 
	rm -f *.o ./td5
