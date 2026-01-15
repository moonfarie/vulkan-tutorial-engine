CFLAGS = -std=c++17 -O2
LDFLAGS = -lglfw -lvulkan -ldl -lpthread -lX11 -lXxf86vm -lXrandr -lXi

engine: *.cpp *.hpp
	g++ $(CFLAGS) -o engine *.cpp $(LDFLAGS)

.PHONY: test clean

test: engine
	./engine

clean:
	rm -f engine
