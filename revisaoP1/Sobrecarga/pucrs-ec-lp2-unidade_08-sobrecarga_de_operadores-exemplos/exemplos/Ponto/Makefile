# Makefile (Roland Teodorowitsch; 28 set. 2019)

EXECUTAVEL=app
CFLAGS=-c -std=c++11

all:		${EXECUTAVEL}

${EXECUTAVEL}:	main.o Ponto.o
		@g++ main.o Ponto.o -o ${EXECUTAVEL}

main.o:		main.cpp Ponto.hpp
		@g++ ${CFLAGS} main.cpp

Ponto.o:	Ponto.cpp Ponto.hpp
		@g++ ${CFLAGS} Ponto.cpp

run:		${EXECUTAVEL}
		@./${EXECUTAVEL}

clean:
		@rm -f Ponto.o main.o ${EXECUTAVEL}
