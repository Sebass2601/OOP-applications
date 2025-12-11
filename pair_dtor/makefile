# Compiler and flags
CXX      = g++
CXXFLAGS = -std=c++14 -Wall -Wextra -g

# Target name
TARGET = main

# Source and object files
SRCS = main.cpp
OBJS = $(SRCS:.cpp=.o)

# Default target
all: $(TARGET)

# Link step
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

# Compile step
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean generated files
clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: all clean
