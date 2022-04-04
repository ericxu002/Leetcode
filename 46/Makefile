CXX=clang++
CXXFLAGS = -Wall -Wextra -Werror

BINARIES = test 

all: ${BINARIES}

test: 46.o 
	${CXX} $^ -std=c++17 -o $@

test.o: 46.cpp
	${CXX} ${CXXFLAGS} -std=c++17 -c 46.cpp

clean:
	rm -f *.o main