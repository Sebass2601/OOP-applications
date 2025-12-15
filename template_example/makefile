CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -pedantic -g

TARGET = main
OBJS = Cube.o main.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(TARGET)

Cube.o: Cube.cpp Cube.h
	$(CXX) $(CXXFLAGS) -c Cube.cpp

main.o: main.cpp Cube.h
	$(CXX) $(CXXFLAGS) -c main.cpp

clean:
	rm -f $(OBJS) $(TARGET)
