CXX=clang++
CXXFLAGS = -Wall -Wextra -Werror

BINARIES = test 

all: ${BINARIES}

test: 58.o 
	${CXX} $^ -std=c++17 -o $@

test.o: 58.cpp
	${CXX} ${CXXFLAGS} -std=c++17 -c 58.cpp

clean:
	rm -f *.o main