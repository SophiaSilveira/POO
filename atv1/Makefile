#Makefile app1

EXECUTAVEL = app
CFLAGS = -c -std=c++11 #-DDEBUG

all:  ${EXECUTAVEL}

${EXECUTAVEL}: app1.o Aplicacao.o Filme.o
				@g++ app1.o Aplicacao.o Filme.o -o ${EXECUTAVEL}

app.o:  app1.cpp Aplicacao.hpp
		  @g++ ${CFLAGS} app1.cpp

Aplicacao.o : Aplicacao.cpp Aplicacao.hpp Filme.hpp
				@g++ ${CFLAGS} Aplicacao.cpp

Filme.o: Filme.cpp Filme.hpp
			@g++ ${CFLAGS} Filme.cpp

run: ${EXECUTAVEL}
		@./${EXECUTAVEL}

clean: 
		@rm -f Aplicacao.o Filme.o app1.o ${EXECUTAVEL}