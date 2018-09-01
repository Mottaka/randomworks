CC= g++
CCFLAGS= -g -Wall

exec: main.o LargeInt.o makefile
    $(CC) $(CCFLAGS) -o LargeInt main.o LargeInt.o

main.o: main.C LargeInt.h
    $(CC) $(CCFLAGS) -c main.C

LargeInt.o: LargeInt.c LargeInt.h
    $(CC) $(CCFLAGS) -c LargeInt.c

clean:
    rm -f *.o
