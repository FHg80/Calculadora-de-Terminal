main.o: main.c 
	gcc -c main.c -o main.o
arit.o: arit.c
	gcc -c arit.c -o arit.o
main: main.o arit.o
	gcc main.o arit.o -o main