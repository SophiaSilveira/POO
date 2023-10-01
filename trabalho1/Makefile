#Makefile 
# make compila app1, app2 e app3. 
# rodar ou ./app1 ou ./app2 ou ./app3
# make clean limpa todos, incluindo filmes.txt.out cinemas.txt.out

CFLAGS = -c -std=c++11 #-DDEBUG
EXECUTAVELUM = app1
EXECUTAVELDOIS = app2
EXECUTAVELTRES = app3

all:  ${EXECUTAVELUM} ${EXECUTAVELDOIS} ${EXECUTAVELTRES}

${EXECUTAVELUM}: app1.o Aplicacao.o Filme.o Cinema.o Endereco.o Programacao.o 
				@g++ app1.o Aplicacao.o Filme.o Cinema.o Endereco.o Programacao.o -o ${EXECUTAVELUM}

${EXECUTAVELDOIS}: app2.o Aplicacao.o Filme.o Cinema.o Endereco.o Programacao.o 
				@g++ app2.o Aplicacao.o Filme.o Cinema.o Endereco.o Programacao.o -o ${EXECUTAVELDOIS}

${EXECUTAVELTRES}: app3.o Aplicacao.o Filme.o Cinema.o Endereco.o Programacao.o 
				@g++ app3.o Aplicacao.o Filme.o Cinema.o Endereco.o Programacao.o -o ${EXECUTAVELTRES}

app1.o:  app1.cpp Aplicacao.hpp
		  @g++ ${CFLAGS} app1.cpp

app2.o:  app2.cpp Aplicacao.hpp
		  @g++ ${CFLAGS} app2.cpp

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

run: all

clean: 
		@rm -f filmes.txt.out cinemas.txt.out Aplicacao.o Filme.o Cinema.o Endereco.o Programacao.o app1.o app2.o app3.o ${EXECUTAVELUM} ${EXECUTAVELDOIS} ${EXECUTAVELTRES}