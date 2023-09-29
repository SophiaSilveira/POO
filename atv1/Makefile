#Makefile app1

EXECUTAVEL = app
CFLAGS = -c -std=c++11 -DDEBUG

all:  ${EXECUTAVEL}

${EXECUTAVEL}: app2.o Aplicacao.o Filme.o Cinema.o Endereco.o
				@g++ app2.o Aplicacao.o Filme.o Cinema.o Endereco.o -o ${EXECUTAVEL}

app2.o:  app2.cpp Aplicacao.hpp
		  @g++ ${CFLAGS} app2.cpp

Aplicacao.o : Aplicacao.cpp Aplicacao.hpp Filme.hpp Cinema.hpp
				@g++ ${CFLAGS} Aplicacao.cpp

Filme.o: Filme.cpp Filme.hpp
			@g++ ${CFLAGS} Filme.cpp

Cinema.o: Cinema.cpp Cinema.hpp Endereco.hpp
			@g++ ${CFLAGS} Cinema.cpp

Endereco.o: Endereco.cpp Endereco.hpp
			@g++ ${CFLAGS} Endereco.cpp

run: ${EXECUTAVEL}
		@./${EXECUTAVEL}

clean: 
		@rm -f Aplicacao.o Filme.o Cinema.o Endereco.o app1.o ${EXECUTAVEL}