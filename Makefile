main: main.o funcs.o caesar.o 
	g++ -o main main.o funcs.o caesar.o

tests: tests.o funcs.o caesar.o
	g++ -o tests tests.o funcs.o caesar.o

funcs.o: funcs.cpp funcs.h

main.o: main.cpp funcs.h caesar.h

tests.o: tests.cpp doctest.h funcs.h caesar.h
	g++ -c -std=c++11 tests.cpp

clean:
	rm -f main.o funcs.o tests.o main tests caesar.o
