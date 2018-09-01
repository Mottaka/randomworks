CC= g++
CCFLAGS= -g -Wall

exec: main.o xArray.o makefile
	$(CC) $(CCFLAGS) -o intTest main.o xArray.o

main.o: main.C xArray.h
	$(CC) $(CCFLAGS) -c main.C

xArray.o: xArray.C xArray.h
	$(CC) $(CCFLAGS) -c xArray.C

clean:
	rm -rf *.o
