
chessai	:	main.o	chess.o
	g++ -o bin/chessai bin/main.o bin/chess.o

main.o	:	src/main.cpp
	g++	-c	src/main.cpp -o bin/main.o

chess.o	:	src/chess.cpp
	g++	-c	src/chess.cpp -o bin/chess.o

clean:
	rm -f bin/*.o
	rm -f bin/chessai	
