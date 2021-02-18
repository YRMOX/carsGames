carsGames: main.cpp libs/src/*.cpp include/*.hpp
	#Génération des libs
	g++ -c libs/src/Game.cpp -o libs/Game.lib
	g++ -c libs/src/Car.cpp -o libs/Car.lib
	g++ -c libs/src/Engine.cpp -o libs/Engine.lib
	g++ -c libs/src/GearBox.cpp -o libs/GearBox.lib
	g++ -c libs/src/Wheel.cpp -o libs/Wheel.lib
	g++ -c libs/src/Formula.cpp -o libs/Formula.lib
	g++ -c libs/src/Vector3.cpp -o libs/Vector3.lib
	g++ -c libs/src/Loger.cpp -o libs/Loger.lib
	#
	#Génération de l'executable
	g++ -static  main.cpp libs/*.lib -o carsGames

carsGames.exe: main.cpp libs/src/*.cpp include/*.hpp
	#Génération des libs
	x86_64-w64-mingw32-g++ -c libs/src/Game.cpp -o libs/Game.lib
	x86_64-w64-mingw32-g++ -c libs/src/Car.cpp -o libs/Car.lib
	x86_64-w64-mingw32-g++ -c libs/src/Engine.cpp -o libs/Engine.lib
	x86_64-w64-mingw32-g++ -c libs/src/GearBox.cpp -o libs/GearBox.lib
	x86_64-w64-mingw32-g++ -c libs/src/Wheel.cpp -o libs/Wheel.lib
	x86_64-w64-mingw32-g++ -c libs/src/Formula.cpp -o libs/Formula.lib
	x86_64-w64-mingw32-g++ -c libs/src/Vector3.cpp -o libs/Vector3.lib
	x86_64-w64-mingw32-g++ -c libs/src/Loger.cpp -o libs/Loger.lib
	#
	#Génération de l'executable
	x86_64-w64-mingw32-g++ -static  main.cpp libs/*.lib -o carsGames.exe

clear:
	#Suppresion des libs
	rm libs/*.lib
	#
	#Suppresion des executable
	rm test test.exe
	clear
