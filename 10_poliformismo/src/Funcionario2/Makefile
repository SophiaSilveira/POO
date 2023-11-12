# Makefile (Roland Teodorowitsch; 2 nov. 2019)

EXECUTAVEL=app
CFLAGS=-c -std=c++11

all:		${EXECUTAVEL}

${EXECUTAVEL}:	Funcionario.o Professor.o Pesquisador.o main.o
		@g++ Funcionario.o Professor.o Pesquisador.o main.o -o ${EXECUTAVEL}

main.o:		main.cpp Funcionario.hpp Professor.hpp Pesquisador.hpp
		@g++ ${CFLAGS} main.cpp

Funcionario.o:	Funcionario.cpp Funcionario.hpp
		@g++ ${CFLAGS} Funcionario.cpp

Professor.o:	Professor.cpp Professor.hpp Funcionario.hpp
		@g++ ${CFLAGS} Professor.cpp

Pesquisador.o:	Pesquisador.cpp Pesquisador.hpp Funcionario.hpp
		@g++ ${CFLAGS} Pesquisador.cpp

run:		${EXECUTAVEL}
		@./${EXECUTAVEL}

clean:
		@rm -f Funcionario.o Professor.o Pesquisador.o main.o ${EXECUTAVEL}
