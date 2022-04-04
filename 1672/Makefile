CXX=clang++
CXXFLAGS = -Wall -Wextra -Werror

BINARIES = test 

all: ${BINARIES}

test: 1672.o 
	${CXX} $^ -std=c++17 -o $@

test.o: 1672.cpp
	${CXX} ${CXXFLAGS} -std=c++17 -c 1672.cpp

clean:
	rm -f *.o main