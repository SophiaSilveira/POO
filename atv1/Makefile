#Makefile app1

EXECUTAVEL = app1
CFLAGS = -c -std=c++11

all = ${EXECUTAVEL}

${EXECUTAVEL} = Filme.o
				@g++ Filme.o -o ${EXECUTAVEL}

Filme.o = Filme.cpp Filme.hpp
		  @g++ ${CFLAGS} Filme.cpp