default: tema
#ca sa construiesc default construiesc prerequisite "tema". Ca sa construiesc tema, o construiesc cu tema.c si func1.o si imi creez un executabil tema
#Ca sa creez targetul tema, trebuie sa creez object file-ul func1.o care va contine o functie care rezolva punctul a) de la subiectul 1. 
#func1.h contine declaratiile functiilor si a librariilor pe care func1.c le foloseste
functii=func1.o func2.o
tema: tema.c $(functii)
	cc $^ -o $@
# $^ --> all the prerequisites
# $@ --> target name
func1.o: func1.c func1.h
	cc -c func1.c
func2.o: func2.c func2.h
	cc -c func2.c
clean:
	rm -rf func1.o
	rm -rf func2.o
