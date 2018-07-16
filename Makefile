CC = g++
DEPS = main.cpp prop.cpp

STD = -std=c++17
GL = -lGL -lGLU -lglut

make: main.cpp
	 $(CC) $(DEPS) $(STD) $(GL)

clean:
	rm *.out
