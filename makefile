CC=gcc

all:
	$(CC) main.c alat.c queue.c stack.c bst.c hash.c file.c -o studio

run:
	./studio
