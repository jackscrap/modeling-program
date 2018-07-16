CC=g++
DEPS = main.cpp

make: main.cpp
	 $(CC) $(DEPS) -std=c++11 -lglut -lglfw -lGL -lX11 -lpthread -lXrandr -lXi -ldl -lGLEW -lGLU -lm -pthread -ldrm -lXdamage -lXfixes -lX11-xcb -lxcb-glx -lxcb-dri2 -lXxf86vm -lXext -lxcb -lXau -lXdmcp -lsfml-graphics -lsfml-window -lsfml-system -lSOIL

clean:
	rm *.out
