CXX=clang++
CXXFLAGS = -Wall -Wextra -Werror

BINARIES = test 

all: ${BINARIES}

test: 1323.o 
	${CXX} $^ -std=c++17 -o $@

test.o: 1323.cpp
	${CXX} ${CXXFLAGS} -std=c++17 -c 1323.cpp

clean:
	rm -f *.o main