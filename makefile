CC = g++
CFLAGS = -g -Wall -Wextra


default: stack


stack: stacker.o main.o 
	$(CC) $(CFLAGS) -o stack stacker.o main.o


stacker.o: stacker.cpp stacker.h
	$(CC) $(CFLAGS) -c stacker.cpp


main.o: main.cpp stacker.h 
	$(CC) $(CFLAGS) -c main.cpp


clean:
	$(RM) stack *.o *~
