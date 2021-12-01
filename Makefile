FLAG=-Wall -g
CC=gcc

#targets:
all: mats matd connection
#names
mats: libclassmatd.a
matd: libcalssmats.so 

#main
connection: main.o
	$(CC) $(FLAG) -o connection main.o ./libcalssmats.so -lm


#static andynamic library
libclassmatd.a: my_mat.o
	ar -rcs libclassmatd.a my_mat.o
libcalssmats.so: my_mat.o
	$(CC) -shared -o libcalssmats.so my_mat.o

# the order of function
my_mat.o:my_mat.c my_mat.h
	$(CC) $(FLAG) -c my_mat.c
main.o: main.c my_mat.h
	$(CC) $(FLAG) -c main.c

#clean all the file that created by make file
.PHONY:clean
clean: 
	rm -f *.o *.so *.a connection