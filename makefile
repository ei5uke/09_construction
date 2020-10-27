construction: construction.o main.o
	gcc -o construction construction.o main.o

main.o: main.c construction.c
	gcc -c main.c

construction.o: construction.c construction.h
	gcc -c construction.c

run:
	./construction