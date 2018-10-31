hepsi: derle calistir
derle:
	g++ -I ./include/ -o ./lib/okul.o -c ./src/okul.cpp
	g++ -I ./include/ -o ./lib/sinif.o -c ./src/sinif.cpp
	g++ -I ./include/ -o ./lib/ogrenci.o -c ./src/ogrenci.cpp
	g++ -I ./include/ -o ./lib/yonetim.o -c ./src/yonetim.cpp
	g++ -I ./include/ -o ./bin/test ./lib/okul.o ./lib/sinif.o ./lib/ogrenci.o ./lib/yonetim.o ./src/test.cpp
calistir:
	./bin/test