all: main

main: main.cpp
	g++ main.cpp -Wall -Werror -pedantic -std=c++11 -o main

clean:
	rm -rf main