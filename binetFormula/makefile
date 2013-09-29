#
#Bipol Alam
#makefile
#

main.x : main.o binet.o 
	g++ -o main.x -Wall -Wextra -I. main.o binet.o
main.o : main.cpp binet.h
	g++ -c -Wall -Wextra -I. main.cpp
binet.o : binet.h binet.cpp
	g++ -c -Wall -Wextra -I. binet.cpp