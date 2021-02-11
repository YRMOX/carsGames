test: main.cpp Car.cpp Engine.cpp Vector.cpp Formula.cpp Loger.cpp
	g++ main.cpp Engine.cpp Car.cpp Vector.cpp Formula.cpp Loger.cpp -o test
	clear

test.exe: main.cpp Vector.cpp Vector.hpp
	x86_64-w64-mingw32-g++ -static  main.cpp Car.cpp Vector.cpp -o test.exe
	clear

clear: 
	rm test test.exe
	clear
