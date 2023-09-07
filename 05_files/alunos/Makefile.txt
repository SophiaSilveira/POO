# Substitui: g++ -o app2 app2.cpp Turma.cpp ALuno.cpp

aoll: app2

app2: app2.o Turma.o Aluno.o
	  @g++ -o app2 app2.o Turma.o Aluno.o

app2.o: app2.cpp Turma.hpp
	   @g++ -c app2.cpp

Turma.o: Turma.cpp Turma.hpp
		 @g++ -c Turma.cpp

Aluno.o: Aluno.cpp Aluno.hpp
		 @g++ -c Aluno.cpp

clean:
		@rm -f app2.o Turma.o Aluno.o app2