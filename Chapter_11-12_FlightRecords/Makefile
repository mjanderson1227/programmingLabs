run.exe : main.o
		gcc main.o -o run.exe

main.o : main.c flights.h
		gcc -Wall -c main.c

clean: 
		rm *.o run.exe