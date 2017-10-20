all: itunes.o insert.o basic.o
	gcc -o music itunes.c insert.o basic.o
itunes.o: itunes.c
	gcc -c itunes.c
insert.o: insert.c
	gcc -c insert.c
basic.o: basic.c
	gcc -c basic.c
clean:
	rm -f *~ *.o
run: all
	./music

