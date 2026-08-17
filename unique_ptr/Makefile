CXX      := g++
CXXFLAGS := -std=c++20 -Wall -Wextra -Wpedantic -fsanitize=address,undefined -g

BIN := unique_ptr_test

$(BIN): main.cpp unique_ptr.hpp
	$(CXX) $(CXXFLAGS) main.cpp -o $(BIN)

run: $(BIN)
	./$(BIN)

clean:
	rm -f $(BIN)

.PHONY: run clean