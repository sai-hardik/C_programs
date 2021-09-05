palindrome : client.o palin.o
	gcc -o palindrome client.o palin.o
client.o : client.c palin.h
	gcc -c client.c
palin.o : palin.c palin.h
	gcc -c palin.c