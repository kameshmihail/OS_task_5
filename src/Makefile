CC = gcc
FLAGS = -std=c99 -pthread -w -pipe -O2 -Wextra -Werror -Wall -Wno-sign-compare -pedantic -lm

all: run

run: libdeq.so stat.o dynam.o
	$(CC) $(FLAGS) -o run-stat stat.o -L. -ldeq -Wl,-rpath,.
	$(CC) $(FLAGS) -o run-dyn dynam.o     -ldl

stat.o: stat.c
	$(CC) -c $(FLAGS) stat.c

dynam.o: dynam.c
	$(CC) -c $(FLAGS) dynam.c

deque.o: deque.c
	$(CC) -c -fPIC $(FLAGS) deque.c

libdeq.so: deque.o
	$(CC) $(FLAGS) -shared -o libdeq.so deque.o

clean:
	rm -f *.o run-stat run-dyn *.so
