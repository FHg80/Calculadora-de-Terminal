calc.o: calc.c 
	gcc -c calc.c -o calc.o
arit.o: arit.c
	gcc -c arit.c -o arit.o
calc: calc.o arit.o
	gcc calc.o arit.o -o calc