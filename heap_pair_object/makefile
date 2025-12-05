# Compiler and flags
CXX = g++
CXXFLAGS = -std=c++14 -Wall -Wextra -g

# Target executable
TARGET = main

# Source files and objects
SRCS = main.cpp
OBJS = $(SRCS:.cpp=.o)

# Default rule
all: $(TARGET)

# Link step
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(TARGET)

# Compile step
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean build files
clean:
	rm -f $(OBJS) $(TARGET)

# Phony targets
.PHONY: all clean
