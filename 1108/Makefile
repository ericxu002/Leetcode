CXX=clang++
CXXFLAGS = -Wall -Wextra -Werror

BINARIES = test 

all: ${BINARIES}

test: 1108.o 
	${CXX} $^ -std=c++17 -o $@

test.o: 1108.cpp
	${CXX} ${CXXFLAGS} -std=c++17 -c 1108.cpp

clean:
	rm -f *.o main