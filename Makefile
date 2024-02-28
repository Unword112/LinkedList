all: LinkedList.o main.o ChainNode.o
	g++ LinkedList.o main.o ChainNode.o -o testlab

ChainNode.o: ChainNode.cpp
	g++ -c ChainNode.cpp -o ChainNode.o

LinkedList.o: LinkedList.cpp
	g++ -c LinkedList.cpp -o LinkedList.o

main.o: main.cpp
	g++ -c main.cpp -o main.o

clean:
	rm -f *.o testlab