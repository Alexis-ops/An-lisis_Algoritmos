laberinto.o: laberinto.c
	gcc laberinto.c -c

principal.o: principal.c
	gcc principal.c -c

a.out: principal.o laberinto.o
	gcc principal.o laberinto.o

run: a.out
	./a.out

clean:
	rm -f a.out principal.o laberinto.o
