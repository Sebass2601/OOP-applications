# Compiler
CXX = g++
CXXFLAGS = -std=c++20 -Wall -Wextra -O2

# Output executable name
EXEC = pair

# Source files
SRC = pair.cpp
OBJ = $(SRC:.cpp=.o)

# Default target
all: $(EXEC)

# Link step
$(EXEC): $(OBJ)
	$(CXX) $(OBJ) -o $(EXEC)

# Compile step
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean build artifacts
clean:
	rm -f $(OBJ) $(EXEC)

# Phony targets (not files)
.PHONY: all clean
