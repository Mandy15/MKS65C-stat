all: stat.o
	gcc -o stat stat.o

randomfile.o: stat.c
	gcc -c stat.c

clean:
	rm stat stat.o

run:
	./stat
