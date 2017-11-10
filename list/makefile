listtest: listtest.o list.o
	g++ -o listtest list.o listtest.o

list.o: list.cc list.h
	g++ -c list.cc

listtest.o: listtest.cc list.h
	g++ -c listtest.cc

clean:
	rm -rf list.o listtest.o listtest
