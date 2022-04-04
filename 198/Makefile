CXX=clang++
CXXFLAGS = -Wall -Wextra -Werror

BINARIES = test 

all: ${BINARIES}

test: 198.o 
	${CXX} $^ -std=c++17 -o $@

test.o: 198.cpp
	${CXX} ${CXXFLAGS} -std=c++17 -c 198.cpp

clean:
	rm -f *.o main