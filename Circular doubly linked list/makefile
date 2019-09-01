all : compile run
compile:
	g++ -I ./include/ -o ./lib/node.o -c ./src/node.cpp
	g++ -I ./include/ -o ./lib/stack.o -c ./src/stack.cpp
	g++ -I ./include/ -o ./lib/boss.o -c ./src/boss.cpp
	g++ -I ./include/ -o ./bin/main ./lib/node.o ./lib/stack.o ./lib/boss.o ./src/main.cpp
run:
	./bin/main