CC=gcc

install:
	$(CC) -o copy-pilot copy-pilot.c

clean:
	rm copy-pilot
