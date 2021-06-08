all: td5


date.o: date.c date.h
	gcc -c date.c

person.o: person.c person.h date.c date.h
	gcc -c person.c

td5.o: td5.c date.c date.h person.c person.h
	gcc -c td5.c

td5: td5.o date.o person.o
	gcc -o td5 date.o person.o td5.o;./td5

clean: 
	rm -f *.o ./td5
