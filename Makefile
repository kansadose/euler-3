#Makefile 

.c.o:

objs = max_prime.o largest_prime.o make_prime.o division.o

maxprime: $(objs)
	gcc -Wall -O2 -o maxprime $(objs)
max_prime.o: primeset.h

largest_prime.o: primeset.h

max_prime.o: primeset.h

.PHONY: clean
clean:
	rm -f maxprime $(objs)
