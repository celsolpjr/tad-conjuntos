main: main.o tad_conjuntos.o

main.o: main.c tad_conjuntos.h

tad_conjuntos.o: tad_conjuntos.c tad_conjuntos.h

clean:
	rm *.o main
