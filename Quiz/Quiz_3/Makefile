CC=g++
CPPFLAGS=-c -Wall -Werror

Quiz3: main.o 
	$(CC) -o  Quiz3 main.o
	$(CC) $(CPPFLAGS) main.cpp
	
main.o: main.cpp Pair.h
	$(CC) $(CPPFLAGS) main.cpp
	
clean:
	rm -rf *o Quiz3
	