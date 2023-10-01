#Makefile 

EXECUTAVEL = app
CFLAGS = -c -std=c++11 #-DDEBUG

all:  ${EXECUTAVEL}

${EXECUTAVEL}: app3.o Aplicacao.o Filme.o Cinema.o Endereco.o Programacao.o 
				@g++ app3.o Aplicacao.o Filme.o Cinema.o Endereco.o Programacao.o -o ${EXECUTAVEL}

app3.o:  app3.cpp Aplicacao.hpp
		  @g++ ${CFLAGS} app3.cpp

Aplicacao.o : Aplicacao.cpp Aplicacao.hpp Filme.hpp Cinema.hpp Programacao.hpp
				@g++ ${CFLAGS} Aplicacao.cpp

Programacao.o : Programacao.cpp Programacao.hpp Cinema.hpp Filme.hpp
				@g++ ${CFLAGS} Programacao.cpp

Filme.o: Filme.cpp Filme.hpp
			@g++ ${CFLAGS} Filme.cpp

Cinema.o: Cinema.cpp Cinema.hpp Endereco.hpp
			@g++ ${CFLAGS} Cinema.cpp

Endereco.o: Endereco.cpp Endereco.hpp
			@g++ ${CFLAGS} Endereco.cpp

run: ${EXECUTAVEL}
		@./${EXECUTAVEL}

clean: 
		@rm -f Aplicacao.o Filme.o Cinema.o Endereco.o Programacao.o app3.o ${EXECUTAVEL}