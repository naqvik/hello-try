hello : hello.cpp
	g++ -Wall -o hello hello.cpp

runit : hello
	./hello
