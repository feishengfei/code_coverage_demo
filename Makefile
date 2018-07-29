
CC = g++
CFLAGS = -Wall -I. -I /usr/include
LDPATH = -L .

ifeq ($(coverage), yes)
CFLAGS += --coverage
CLINKER = --coverage
endif

all: rectangletest

rectangle.o:rectangle.cpp
	$(CC) $(CFLAGS) $(LDPATH) -c -o $@ $^

rectangletest: rectangletest.cpp rectangle.o
	$(CC) $(CFLAGS) $(LDPATH) -o $@ $< ${CLINKER} rectangle.o

clean:
	rm -fr *.o rectangletest
