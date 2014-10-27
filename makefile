exe:	main.o integer.o object.o tdalist.o farraylist.o slinkedlist.o dlcursorlist.o slnode.o
	g++ main.o integer.o object.o tdalist.o farraylist.o slinkedlist.o slnode.o dlcursorlist.o -o exe

main.o:	main.cpp tdalist.h farraylist.h slinkedlist.h dlcursorlist.h integer.o
	g++ -c main.cpp

integer.o:	integer.cpp integer.h object.h
	g++ -c integer.cpp

tdalist.o:	tdalist.h tdalist.cpp object.h
	g++ -c tdalist.cpp

dlcursorlist.o:	dlcursorlist.cpp dlcursorlist.h tdalist.h object.h
	g++ -c dlcursorlist.cpp

object.o:	object.h object.cpp
	g++ -c object.cpp

slnode.o:	slnode.cpp slnode.h
	g++ -c slnode.cpp

slinkedlist.o:	slinkedlist.cpp slinkedlist.h object.h tdalist.h
	g++ -c slinkedlist.cpp

farraylist.o:	farraylist.cpp farraylist.h object.h tdalist.h
	g++ -c farraylist.cpp

clean:
	rm *.o tda
