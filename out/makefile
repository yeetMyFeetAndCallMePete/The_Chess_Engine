all: board piece main out

board: ../board.cpp
	g++ -c ../board.cpp -Wall -Werror -pedantic -std=c++11

piece: ../piece.cpp
	g++ -c ../piece.cpp -Wall -Werror -pedantic -std=c++11

main: ../main.cpp
	g++ -c ../main.cpp -Wall -Werror -pedantic -std=c++11

out: main.o piece.o board.o
	g++ main.o piece.o board.o -o main

clean:
	rm -rf board.o
	rm -rf piece.o	
	rm -rf main.o
	rm -rf main