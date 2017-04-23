main:main.o mergesort.o
	gcc main.o mergesort.o -o main
main.o:main.c
	gcc -c main.c
calculator.o:calculator.c
	gcc -c mergesort.c

clean:
	rm main *.o
