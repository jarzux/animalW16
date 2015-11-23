
animal:	main.o address.o animal.o
	g++ main.o address.o animal.o -o animal

main.o: main.cpp animal.h
	g++ -c main.cpp

address.o: address.cpp address.h
	g++ -c address.cpp

animal.o: animal.cpp animal.h address.h
	g++ -c animal.cpp
	
clean:
	rm *.o
	rm animal