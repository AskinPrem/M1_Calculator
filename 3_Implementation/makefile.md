all: pd

pdm:main.o calculator.o
	gcc -Wall -o pd main.o calculator.o

main.o:main.c
	gcc -c -Wall main.c

calculatormanagement.o:calculator.c
	gcc -c -Wall calculator.c
