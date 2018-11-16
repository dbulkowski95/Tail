CC = gcc
CFLAGS = -c -Wall

all: Tail

Tail: mainTail.o tail.o
	$(CC) mainTail.o tail.o -o Tail

mainTail.o: mainTail.c 
	$(CC) $(CFLAGS) mainTail.c 

tail.o: tail.c 
	$(CC) $(CFLAGS) tail.c

clean:
	rm -f *.out *o Tail
